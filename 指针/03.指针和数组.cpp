#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 0,1,2,3,4 };
	//������������Ԫ��
	for (int i = 0; i < 5; i++)
	{
		cout << "�����" << i << "��Ԫ�ص�ֵ" << arr[i] << endl;
	}
	//����ĵ�ַ�������׸�Ԫ�صĵ�ַ��ͬ
	int* arr_p = arr;
	int* arr_f_p = &arr[0];
	cout << "�����ַ��" << arr_p << endl;
	cout << "�����׸�Ԫ�صĵ�ַ��" << arr_f_p << endl;
	//����ָ���������Ԫ��
	for (int i = 0; i < 5; i++)
	{
		cout << "ָ����������" << i << "��Ԫ�ص�ֵ" << *arr_p << endl;
		//ָ�����ƫ��4��8�����ֽ�
		arr_p++;
	}
	return 0;
}