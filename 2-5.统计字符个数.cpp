#include<iostream>
#include<string>
using namespace std;
int main()
{
	int letters=0, space=0, digits=0, others=0;
	char c;
	cout << "�������ַ���" << endl;
	cin >> c;
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			letters++;
		}
		else if (c == 32)
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	cout << "��ĸ�У�" <<letters<< endl;
	cout << "�ո��У�" << space << endl;
	cout << "�����У�" << digits << endl;
	cout << "�����У�" << others << endl;
	
	return 0;

}