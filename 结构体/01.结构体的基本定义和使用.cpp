/*
�ṹ��ؼ��� struct
*/
#include <iostream>
using namespace std;

//1.�����ṹ��
struct MyStudent
{
	//�ṹ���Ա�б�
	string name;
	int age;

};
int main() {
	//2.ͨ���ṹ�崴���ṹ�����,struct�ؼ��ֿ���ʡ��
	struct MyStudent stu_01;
	//3.���ṹ�������Ա���Ը�ֵ
	stu_01.name = "����";
	stu_01.age = 18;
	//4,���ʽṹ�������Ա����
	cout << "�ṹ�������Ա����name:" << stu_01.name << endl;
	cout << "�ṹ�������Ա����age:" << stu_01.age << endl;

	//�ڽṹ�崴����ʱ�����ֵ
	MyStudent stu_02 = { "����",23 };
	cout << "�ṹ�������Ա����name:" << stu_02.name << endl;
	cout << "�ṹ�������Ա����age:" << stu_02.age << endl;
	return 0;
}