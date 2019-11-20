package main.DBMain;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

import java.io.Reader;

public class DBMainUtil {
    public static SqlSessionFactory sqlSessionFactory;
    static {
        try{
            Reader reader= Resources.getResourceAsReader("mybatis.xml");
            sqlSessionFactory=new SqlSessionFactoryBuilder().build(reader);
        }catch (Exception ex)
        {
            ex.printStackTrace();
        }
    }
    public static SqlSession getSession()
    {
        return sqlSessionFactory.openSession();
    }
}
