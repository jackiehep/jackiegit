import main.DBMain.DBMainUtil;
import main.Interface.UserMapper;
import main.Model.UserInfo;
import org.apache.ibatis.session.SqlSession;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import java.util.List;

public class DBUsageTest {
    private SqlSession sqlSession=null;
    private UserMapper userMapper=null;
    @Before
    public void before()
    {
        sqlSession= DBMainUtil.getSession();
        userMapper=sqlSession.getMapper(UserMapper.class);
    }
    @Test
    public void insertData()
    {
        UserInfo userInfo=new UserInfo("jjj","kkk","test");
        try {
            userMapper.insertUser(userInfo);
            sqlSession.commit();
            System.out.println(userInfo.toString());
        }catch (Exception ex)
        {
            ex.printStackTrace();
            sqlSession.rollback();
        }
    }
    @Test
    public void selectAll()
    {
        try {
            List<UserInfo> info = userMapper.selectUserList();
            sqlSession.commit();
            for (UserInfo userInfo : info) {
                System.out.println(userInfo.toString());
            }
        }catch (Exception ex)
        {
            ex.printStackTrace();
            sqlSession.rollback();
        }
    }
    @After
    public void after()
    {
        if(sqlSession!=null)
            sqlSession.close();
    }

}
