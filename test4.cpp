#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;

class FirstClass{
    protected:
    string sValue;
    public:
    virtual void ClassFuncOne(string & in){};
    virtual void ClassFuncTwo(int & in){};
};
class SecondClass:public FirstClass{
    public:
    virtual void ClassFuncOne(string & in)
    {
        if(in=="jackie")
            sValue="hepeng";
        else
        {
            sValue="hepeng01";
        }
        cout<<sValue<<endl;
        
    }
};
class ThirdClass:public FirstClass{
    public:
    virtual void ClassFuncTwo(int & in)
    {
        if(in==100)
            sValue="jackie";
        else
            sValue="jackie01";
        cout<<sValue<<endl;
    }
};
class ForthClass:public SecondClass,public ThirdClass{
    public:
    void ActionOne(string& in)
    {
        SecondClass::ClassFuncOne(in);
    }
    void ActionTwo(int & in)
    {
        ThirdClass::ClassFuncTwo(in);
    }

};
class LastClass:public ForthClass{
    public:
    void TestCaseOne()
    {
        string inone="jackie";
        int    intwo=100;
        ActionOne(inone);
        ActionTwo(intwo);
    }
};
class DialogTest{
    private:
    string inone;
    string intwo;
    public:
    DialogTest()
    {
        inone="jackie";intwo="hepeng";
    }
    void PrintInfo()
    {
        cout<<inone<<".."<<intwo<<endl;
    }
};
class DialogTestTwo{
    private:
    int nvalue;
    string svalue;
    public:
    DialogTestTwo()
    {
        nvalue=1000;
        svalue="helen he print";
    }
    void ShowInfo()
    {
        cout<<nvalue<<".."<<svalue<<endl;
    }
};

class CDialogTestThree{
    private:
    DialogTest & m_dt;
    public:
    CDialogTestThree(DialogTest & dt):m_dt(dt){}
    void ActionTest()
    {
        m_dt.PrintInfo();
    }
    void ActionTestOne()
    {
        m_dt.PrintInfo();
        cout<<"Your should be right"<<endl;
    }
};

class CInformation{
    private:
    CDialogTestThree & three;
    public:
    CInformation(CDialogTestThree & mthree):three(mthree){}
    void ActionPerformed()
    {
        three.ActionTestOne();
    }
};

class CHelen{
    private:
    string sInput;
    public:
    CHelen(string & sIn):sInput(sIn){}
    void ShowInfo(){
        cout<<sInput<<endl;
    }
};

int main()
{
    LastClass lc;
    lc.TestCaseOne();
    DialogTest dt;
    dt.PrintInfo();
    DialogTestTwo dtt;
    dtt.ShowInfo();
    CDialogTestThree cdtt(dt);
    cdtt.ActionTest();
    cdtt.ActionTestOne();
    //ask haofeng to do something
    string in="english";
    CHelen helen(in);
    helen.ShowInfo();
    //ask haofeng to finish this job
    return 1;
}