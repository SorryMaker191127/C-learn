#include <iostream>
using namespace std;
void func(int a, int b) {
	int temp = b;
	b = a;
	a = temp;
}
void func_p(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}
int main() {
	int a = 10;
	int b = 20;
	//1��ֵ����
	func(a, b);
	cout << "ֵ����-----------------------" << endl;
	cout << "a��ֵ��" << a << endl;
	cout << "b��ֵ��" << b << endl;
	//2,��ַ����
	func_p(&a, &b);
	cout << "��ַ����---------------------" << endl;
	cout << "a��ֵ��" << a << endl;
	cout << "b��ֵ��" << b << endl;
	return 0;
}