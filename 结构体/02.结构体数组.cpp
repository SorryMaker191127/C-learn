#include <iostream>
using namespace std;
//1,�����ṹ��
struct MyStudent
{
	string name;
	int age;
};
int main() {
	//2�������ṹ�����飬���Զ���Ľṹ�����������
	MyStudent stu_arr[3] =
	{
		{"����",18},
		{"����",23},
		{"����",26},
	};
	//3,�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "����������:" << stu_arr[i].name << "----" << stu_arr[i].age << endl;
	}
	return 0;
}