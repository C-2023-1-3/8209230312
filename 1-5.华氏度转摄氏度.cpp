#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F;
	cout << "�����뻪�϶ȣ�" << endl;
	cin >> F;
	float C = (F - 32) * 5 / 9;
	cout << "���϶�Ϊ��" <<setprecision(2)<<C << endl;
	return 0;
}