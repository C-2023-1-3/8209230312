#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r, h;
	cout << "���������뾶" << endl;
	cin >> r;
	cout << "������׶��" << endl;
	cin >> h;
	double S = pi * r * r;
	double V = (S * h)/3;
	cout << "Բ׶���Ϊ��" <<V  << endl;
	return 0;

}