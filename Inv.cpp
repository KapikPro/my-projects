#include<iostream>
using namespace std;
void cp(double k1, double k2, int n,double pr, int a)
{
	if (a == 1)
	{
		cout << "������� ���� ����� ����� ��� �������:\n";
		cin >> k2;
		cout << "\n";
		
		cout << "������ ������� ����� " << n * (k2 - k1 - (k2 + k1) * pr) << '\n';
		cout << "����� �������� ����� " << n * (k2 + k1) * pr << '\n';
	}
}
void zhp(double k1, double k2, int n, double pr, int a)
{
	double s;
	cout << "������� �������� �������:\n";
	cin >> s;
	cout << "��� ��������� ������� ������ ����������,����� ���� ����� ����� ����� " << ((s/n)+k1+k1*pr)/(1-pr) << '\n';
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n;
	double k1, k2=0, pr;
	cout << "������� ���������� ��������� �����:\n";
	cin >> n;
	cout << "������� ���� ����� ����� ��� �������:\n";
	cin >> k1;
	cout << "������� �������� �������(����������� 0.003):\n";
	cin >> pr;
	cout << '\n';
	cout << "1) ������ ��������� ������ ������� � �������� �������:\n";
	cout << "2) ������ ���������� �������������� �������:\n";
	cout << "3) ������ ��������� ������:\n";
	cin >> a;
	while (a!=3)
	{
		zhp( k1, k2, n, pr,  a);
		cp( k1,  k2, n, pr,  a);
		cout << "\n";
		cout << "1) ������ ��������� ������ ������� � �������� �������:\n";
		cout << "2) ������ ���������� �������������� �������:\n";
		cout << "3) ������ ��������� ������:\n";
		cin >> a;
	}
}