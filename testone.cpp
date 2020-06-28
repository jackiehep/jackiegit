#include <iostream>
#include <string>
using namespace std;
class ClassDefine{
	private:
	int id;
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
	cout<<"Jackie print it"<<endl;
	return 1;
}
