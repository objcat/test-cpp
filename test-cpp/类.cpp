#include<iostream>
using namespace std;
#include<string>

class Circle 
{
public:
	// �뾶
	int r;
	string name;
	double cal() 
	{
		return 2 * 3.14 * r;
	}

private:

};

namespace cirle 
{
	void test() 
	{
		Circle cl;
		cl.r = 2;
		cl.name = "circle";
		cout << "Բ�İ뾶��" << cl.cal() << endl;
		cout << "������" << cl.name << endl;
	}
}



//int main() {
//	cirle::test();
//	return 0;
//}