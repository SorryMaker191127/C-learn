/*
结构体关键字 struct
*/
#include <iostream>
using namespace std;

//1.创建结构体
struct MyStudent
{
	//结构体成员列表
	string name;
	int age;

};
int main() {
	//2.通过结构体创建结构体变量,struct关键字可以省略
	struct MyStudent stu_01;
	//3.给结构体变量成员属性赋值
	stu_01.name = "张三";
	stu_01.age = 18;
	//4,访问结构体变量成员属性
	cout << "结构体变量成员属性name:" << stu_01.name << endl;
	cout << "结构体变量成员属性age:" << stu_01.age << endl;

	//在结构体创建的时候赋予初值
	MyStudent stu_02 = { "李四",23 };
	cout << "结构体变量成员属性name:" << stu_02.name << endl;
	cout << "结构体变量成员属性age:" << stu_02.age << endl;
	return 0;
}