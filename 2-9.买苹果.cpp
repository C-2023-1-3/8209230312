#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int q = 2;
	int sum = q;
	int a;
	for (int i = 1;;i++)
	{
		if (q*2 < 100)
		{
			q = q * 2;
			a = i;
			sum = sum + q;
		}
		else
			break;
	}
	double b;
	b = (sum * 0.8) / a;
	cout << "ƻ���У�" <<q<< endl;
	cout << setprecision(4)<< "ƽ��ÿ�컨�ѣ�" << b << endl;

	return 0;
}