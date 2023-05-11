#include <iostream>
using namespace std;
//1,创建结构体
struct MyStudent
{
	string name;
	int age;
};
int main() {
	//2，创建结构体数组，将自定义的结构体放入数组中
	MyStudent stu_arr[3] =
	{
		{"张三",18},
		{"李四",23},
		{"王五",26},
	};
	//3,遍历结构体数据
	for (int i = 0; i < 3; i++)
	{
		cout << "机构体数据:" << stu_arr[i].name << "----" << stu_arr[i].age << endl;
	}
	return 0;
}