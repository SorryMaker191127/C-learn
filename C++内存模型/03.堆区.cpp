#include <iostream>
using namespace std;

int* func() {
	//ʹ��new�ؼ��֣��ڶ��������ڴ棬�����ض��ڴ��ַ
	//ָ��a����Ҳ�Ǿֲ�����������ջ�ϣ�ָ��ָ��ı�������ݷ��ڶ���
	int* a = new int(10);

	//������������
	int* b = new int[5];
	for (int i = 0; i < 5; i++) {
		b[i] = i;
	}
	for (int i = 0; i < 5; i++) {
		cout << b[i] << endl;
	}
	//�ͷ�����,��Ҫ���[]
	delete[] b;
	return a;
}
int main() {
	//�ڶ�����������
	int* p = func();
	cout << "�������ٵı�����ֵ" << *p << endl;
	cout << "�������ٵı����ڴ��ַ" << (int)p << endl;
	//ʹ��delete �ؼ����ֶ��ͷŶ�������
	delete p;
	//�ֶ��ͷź��ٴη��ʾ����ڷǷ��������ᱨ��
	//���� cout << "�������ٵı�����ֵ" << *p << endl;
	//���� cout << "�������ٵı����ڴ��ַ" << (int)p << endl;
	return 0;
}