#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class CJackie{
    private:
    int id;
    string value;
    public:
    CJackie(int id,string value)
    {
        this->id=id;this->value=value;
    }
    void ShowInfo()
    {
        cout<<id<<"..."<<value<<endl;
    }
    void PrintInfo()
    {
	    cout<<"Dialog book is mine"<<endl;
    }

};
int main()
{
    CJackie jack(1000,"jackie");
    jack.ShowInfo();
    return 1;
}
