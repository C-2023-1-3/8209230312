#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "���������߳�" << endl;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "�ܳ�Ϊ��" << x + y + z << endl;
		if (x == y || x == z || y == z)
		{
			cout << "�ǵ���������" << endl;
		}
		else
			cout << "���ǵ���������" << endl;
	}
	else
		cout << "����������" << endl;

	return 0;
}