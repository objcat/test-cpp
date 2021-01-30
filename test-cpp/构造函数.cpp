#include<iostream>
using namespace std;
class Persion
{
public:
	int age;
	// 构造函数 如果不写编译器默认会提供一个空的构造
	Persion();
	// 析构函数
	~Persion();

	// 有参构造函数
	Persion(int a);
	// 拷贝构造函数
	Persion(const Persion &p);

private:

};

Persion::Persion()
{	
	cout << "构造函数执行" << endl;
}

Persion::~Persion()
{
	cout << "析构函数执行" << endl;
}

Persion::Persion(int a)
{
	age = a;
}

Persion::Persion(const Persion &persion)
{
	age = persion.age;
}
namespace gouzao
{
	void test()
	{
		// 普通创建
		Persion p;
		// 参数创建
		Persion p2 = Persion(1);
		cout << "p2的地址是" << &p2 << "p2的年龄是" << p2.age << endl;
		// 拷贝
		Persion p3 = Persion(p2);
		cout << "p3的地址是" << &p3 << "p3的年龄是" << p3.age << endl;
	}
}

using namespace gouzao;

int main()
{
	test();
	return 0;
}