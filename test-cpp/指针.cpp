#include<iostream>
using namespace std;

namespace zhizhen {
	void test() {
		//����ָ��
		int a = 10;
		//ָ�붨����﷨ �������� * ָ������� = &����;
		int *p = &a;
		// ָ���ʹ��
		cout << "�����ĵ�ַ�� " << p << endl << "ָ���Ӧ��ֵ�� " << *p << endl;
		// ָ����ռ�õ��ڴ�ռ��С 32λϵͳ��ָ��ռ4���ֽ� 64λָ��ռ8���ֽڴ�С
		cout << "ָ��ռ�õ��ڴ��С" << sizeof(int *) << endl;
		cout << "ָ��ռ�õ��ڴ��С" << sizeof(float *) << endl;
		cout << "ָ��ռ�õ��ڴ��С" << sizeof(double *) << endl;
		cout << "ָ��ռ�õ��ڴ��С" << sizeof(char *) << endl;
		// ��ͬ����32λϵͳ��ָ��ռ��4���ֽ� ��ָ��ָ���double���ͱ���ռ��8���ֽ�
		// 64λϵͳ��doubleָ��ͱ�������8 �Լ����Դ�ӡ��һ��
		double a2 = 1.2;
		double *p2 = &a2;
		cout << "doubleָ��" << sizeof(p2) << " double��С" << sizeof(*p2) << endl;

		// ��ָ�� ָ����Ϊ0�Ŀռ� ��;:��ʼ��ָ�����
		int *p3 = NULL;
		// ��ȡ�ᷢ������
		//cout << *p3 << endl;

		// Ұָ�� �������쳣: ��ȡ����Ȩ�޳�ͻ��p4 �� 0x1100��
		int *p4 = (int *)0x1100;
		//cout << *p4 << endl;

		// ����ָ�� ָ���ָ����Ըı� ����ָ��ָ���ֵ���ܱ�
		int a5 = 10;
		const int *p5 = &a5;
		// ��仰���ǰѱ���a��ֵ��Ϊ1
		//*p5 = 20; // ����
		int a55 = 2;
		// ��仰�ǰ�ָ��a��ָ��ָ��c �ǿ��Գɹ�ִ�е�
		p5 = &a55;
		cout << "ָ��ָ��c�� ָ���е�ֵ" << *p5 << endl;

		// ָ�볣�� ָ���ָ�򲻿��Ըı� ��ֵ���Ըı�
		int a6 = 10;
		int * const p6 = &a6;
		// ���ܸı�ָ��
		//p6 = &c; // ����
		*p6 = 1;
		cout << "p6=" << *p6 << endl;
	}

}


//int main() {
//	zhizhen::test();
//	return 0;
//}
