#include <iostream>
using namespace std;
struct MyStudent
{
	string name;
	int age;
};
int main() {
	//ͨ���ṹ��ָ����ʽṹ������ĳ�Ա���� ����->
	MyStudent stu = { "����",18 };
	MyStudent* stu_p = &stu;
	cout << "�ṹ��ָ����ʽṹ�������Ա���ԣ�" 
		<< stu_p->name << "---" 
		<< stu_p->age << endl;
	return 0;
}