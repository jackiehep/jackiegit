package main;


//Could you tell me what you mean?
class TestUtil
{
    private static TestUtil testUtil =null;
    public TestUtil()
    {

    }
    public static TestUtil getInstance(){
        if(testUtil==null)
            testUtil=new TestUtil();
        return testUtil;
    }
    public void showInfo()
    {
        System.out.println("Dialog book is mine");
    }

}
class TestOneUtil
{
    private static  String value ="jackie hepeng";
    public static void showSomethingForThisIssue()
    {
        System.out.println(value);
    }
    public static  void showSomethingForThisInfo()
    {
        System.out.println("this info is good");
    }
}
interface  iTest
{
    public void TestOneFunc();
    public void TestTwoFunc();
}
abstract class ATest implements iTest{
    @Override
    public void TestOneFunc() {
        System.out.println("This is Test One Function print");
    }
    public abstract void TestThreeFunc();
}
class ConcreteTest extends  ATest
{
    @Override
    public void TestTwoFunc() {
        System.out.println("you are right");
    }

    @Override
    public void TestThreeFunc() {
        System.out.println("you should be right");
    }
}


public class MainProcessor {
    public static void main(String[] args) {
        TestOneUtil.showSomethingForThisInfo();
        TestOneUtil.showSomethingForThisIssue();
        TestUtil.getInstance().showInfo();
    }
}
