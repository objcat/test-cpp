#include<iostream>
using namespace std;
int main() {
	//定义指针
	int a = 10;
	//指针定义的语法 数据类型 * 指针变量名 = &变量;
	int *p = &a;
	// 指针的使用
	cout << "变量的地址是 " << p << endl << "指针对应的值是 " << *p << endl;
	// 指针所占用的内存空间大小 32位系统下指针占4个字节 64位指针占8个字节大小
	cout << "指针占用的内存大小" << sizeof(int *) << endl;
	cout << "指针占用的内存大小" << sizeof(float *) << endl;
	cout << "指针占用的内存大小" << sizeof(double *) << endl;
	cout << "指针占用的内存大小" << sizeof(char *) << endl;
	// 不同的是32位系统上指针占用4个字节 而指针指向的double类型变量占用8个字节
	// 64位系统下double指针和变量都是8 自己可以打印试一下
	double b = 1.2;
	double *p2 = &b;
	cout << "double指针" << sizeof(p2) << " double大小" << sizeof(*p2) << endl;

	// 空指针 指向编号为0的空间 用途:初始化指针变量
	int *p3 = NULL;
	// 读取会发生错误
	//cout << *p3 << endl;

	// 野指针 引发了异常: 读取访问权限冲突。p4 是 0x1100。
	int *p4 = (int *)0x1100;
	//cout << *p4 << endl;

	// 常量指针 指针的指向可以改变 但是指针指向的值不能变
	const int *p5 = &a;
	int c = 2;
	// 这句话就是把变量a的值变为1
	//*p5 = 20; // 报错
	//虽然不能使用常量指针来改变值 但是可以通过修改原值来进行改变
	a = 20;
	cout << "a改变后 指针中的值" << *p5 << endl; //20
	// 这句话是把指向a的指针指向c 是可以成功执行的
	p5 = &c;
	cout << "指针指向c后 指针中的值" << *p5 << endl;

	return 0;
}