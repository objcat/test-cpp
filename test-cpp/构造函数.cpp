#include<iostream>
using namespace std;
class Persion
{
public:
	int age;
	// ���캯�� �����д������Ĭ�ϻ��ṩһ���յĹ���
	Persion();
	// ��������
	~Persion();

	// �вι��캯��
	Persion(int a);
	// �������캯��
	Persion(const Persion &p);

private:

};

Persion::Persion()
{	
	cout << "���캯��ִ��" << endl;
}

Persion::~Persion()
{
	cout << "��������ִ��" << endl;
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
		// ��ͨ����
		Persion p;
		// ��������
		Persion p2 = Persion(1);
		cout << "p2�ĵ�ַ��" << &p2 << "p2��������" << p2.age << endl;
		// ����
		Persion p3 = Persion(p2);
		cout << "p3�ĵ�ַ��" << &p3 << "p3��������" << p3.age << endl;
	}
}

using namespace gouzao;

int main()
{
	test();
	return 0;
}