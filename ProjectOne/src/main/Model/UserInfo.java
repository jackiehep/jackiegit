package main.Model;

public class UserInfo {
    private static final long serialVersionUID = 1L;
    private int userid;
    private String name;
    private String password;
    private String memo;

    public UserInfo(String name, String password, String memo) {
        this.name = name;
        this.password = password;
        this.memo = memo;
    }

    public UserInfo(int userid, String name, String password, String memo) {
        this.userid = userid;
        this.name = name;
        this.password = password;
        this.memo = memo;
    }

    public int getUserid() {
        return userid;
    }

    public void setUserid(int userid) {
        this.userid = userid;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getMemo() {
        return memo;
    }

    public void setMemo(String memo) {
        this.memo = memo;
    }

    public UserInfo() {
    }

    @Override
    public String toString() {
        return "UserInfo{" +
                "userid=" + userid +
                ", name='" + name + '\'' +
                ", password='" + password + '\'' +
                ", memo='" + memo + '\'' +
                '}';
    }
}
