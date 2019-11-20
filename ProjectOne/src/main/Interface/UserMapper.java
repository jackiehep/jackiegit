package main.Interface;


import main.Model.UserInfo;

import java.util.List;

public interface UserMapper {
    public int insertUser(UserInfo user) throws  Exception;
    public List<UserInfo> selectUserList() throws  Exception;
}
