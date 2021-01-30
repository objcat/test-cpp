#include<iostream>
using namespace std;
#include<string>

class Circle 
{
public:
	// 半径
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
		cout << "圆的半径是" << cl.cal() << endl;
		cout << "名字是" << cl.name << endl;
	}
}



//int main() {
//	cirle::test();
//	return 0;
//}