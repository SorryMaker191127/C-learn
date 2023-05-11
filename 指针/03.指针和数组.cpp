#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 0,1,2,3,4 };
	//正常访问数组元素
	for (int i = 0; i < 5; i++)
	{
		cout << "数组第" << i << "个元素的值" << arr[i] << endl;
	}
	//数组的地址和数组首个元素的地址相同
	int* arr_p = arr;
	int* arr_f_p = &arr[0];
	cout << "数组地址：" << arr_p << endl;
	cout << "数组首个元素的地址：" << arr_f_p << endl;
	//利用指针访问数组元素
	for (int i = 0; i < 5; i++)
	{
		cout << "指针访问数组第" << i << "个元素的值" << *arr_p << endl;
		//指针向后偏移4（8）个字节
		arr_p++;
	}
	return 0;
}