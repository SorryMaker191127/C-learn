#include <iostream>
using namespace std;

int* func() {
	//使用new关键字，在堆区开辟内存，并返回堆内存地址
	//指针a本质也是局部变量，放在栈上，指针指向的保存的数据放在堆区
	int* a = new int(10);

	//堆区创建数组
	int* b = new int[5];
	for (int i = 0; i < 5; i++) {
		b[i] = i;
	}
	for (int i = 0; i < 5; i++) {
		cout << b[i] << endl;
	}
	//释放数组,需要添加[]
	delete[] b;
	return a;
}
int main() {
	//在堆区开辟数据
	int* p = func();
	cout << "堆区开辟的变量的值" << *p << endl;
	cout << "堆区开辟的变量内存地址" << (int)p << endl;
	//使用delete 关键字手动释放堆区数据
	delete p;
	//手动释放后，再次访问就属于非法操作，会报错
	//错误 cout << "堆区开辟的变量的值" << *p << endl;
	//错误 cout << "堆区开辟的变量内存地址" << (int)p << endl;
	return 0;
}