#include <iostream>
using namespace std;
/*
ջ������
�ɱ����������ٺ��ͷ�
ע�������Ҫ���ؾֲ������ĵ�ַ
*/
int* func() {
	//aΪ�ֲ������������ջ��
	int a = 10;
	//���ؾֲ�������ջ����ַ
	return &a;
}

int main() {
	int* p = func();
	cout << "�ֲ�������ջ��ֵ�ǣ�" << *p << endl;
	cout << "�ֲ�������ջ��ֵ�ǣ�" << *p << endl;
	cout << "�ֲ�������ջ����ַ�ǣ�" << (int)p << endl;
	cout << "�ֲ�������ջ����ַ�ǣ�" << (int)p << endl;	
}