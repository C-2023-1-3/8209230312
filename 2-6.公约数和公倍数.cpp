#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout << "��������������" << endl;
	cin >> a >> b;
	for (int i = a;; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "���Լ��Ϊ��" << i << endl;
			c = i;
			break;
		}
	}
	int d = (a * b) / c;
	cout << "��С������Ϊ��" << d << endl;
	return 0;
}