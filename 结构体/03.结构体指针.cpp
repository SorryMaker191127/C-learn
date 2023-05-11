#include <iostream>
using namespace std;
struct MyStudent
{
	string name;
	int age;
};
int main() {
	//通过结构体指针访问结构体变量的成员属性 符号->
	MyStudent stu = { "张三",18 };
	MyStudent* stu_p = &stu;
	cout << "结构体指针访问结构体变量成员属性：" 
		<< stu_p->name << "---" 
		<< stu_p->age << endl;
	return 0;
}