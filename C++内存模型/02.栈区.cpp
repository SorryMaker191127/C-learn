#include <iostream>
using namespace std;
/*
栈区数据
由编译器管理开辟和释放
注意事项：不要返回局部变量的地址
*/
int* func() {
	//a为局部变量，存放在栈区
	int a = 10;
	//返回局部变量的栈区地址
	return &a;
}

int main() {
	int* p = func();
	cout << "局部变量的栈区值是：" << *p << endl;
	cout << "局部变量的栈区值是：" << *p << endl;
	cout << "局部变量的栈区地址是：" << (int)p << endl;
	cout << "局部变量的栈区地址是：" << (int)p << endl;	
}