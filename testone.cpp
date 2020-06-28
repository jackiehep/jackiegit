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
	return 1;
}
