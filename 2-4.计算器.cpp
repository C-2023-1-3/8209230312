#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char op;
	double sum;
	cout << "������ʽ" << endl;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+':
		sum = a + b;
		break;
	case '-':
		sum = a - b;
		break;
	case '*':
		sum = a * b;
		break;
	case '/':
		if (b != 0)
		{
			sum = a / b;
		}
		else { cout << "����" << endl; }
		break;

	default:
		cout << "���������" << endl;
		break;
	}
	cout << sum << endl;
	return 0;
}