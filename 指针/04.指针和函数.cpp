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
	//1，值传递
	func(a, b);
	cout << "值传递-----------------------" << endl;
	cout << "a的值：" << a << endl;
	cout << "b的值：" << b << endl;
	//2,地址传递
	func_p(&a, &b);
	cout << "地址传递---------------------" << endl;
	cout << "a的值：" << a << endl;
	cout << "b的值：" << b << endl;
	return 0;
}