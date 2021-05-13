#include <iostream>
#include <string>
using namespace std;
class ClassDefine{
	private:
	int id;
	string name;
	public:
	ClassDefine(int id)
	{
		this->id=id;
	}
	void ShowIDInfo()
	{
		cout<<"ID Info is "<<id<<endl;
	}
};
int main()
{
	ClassDefine cd(1000);
	cd.ShowIDInfo();
	cout<<"show it to me"<<endl;
	return 1;
}
