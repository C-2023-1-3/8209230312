#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "�������ַ�" << endl;
	cin >> a;
	if (a>='a'&&a<='z')
	{
		char b = a - 32;
		cout << b << endl;
	}
	else
	{
		int c = a + 1;
		cout <<c<< endl;
	}
	return 0;
}