#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 1, n;
	double k1, k2, t;
	while (a == 1)
	{
		cout << "������� ���������� ��������� �����:\n";
		cin >> n;
		cout << "������� ���� ����� ����� ��� �������:\n";
		cin >> k1;
		cout << "������� ���� ����� ����� ��� �������:\n";
		cin >> k2;
		cout <<"������ ������� ����� "<< n*(k2-k1-(k2+k1)*0.003) << '\n';
		cout << "����� �������� ����� " << n * (k2 + k1) * 0.003 << '\n';
		cout << "\n";
		cout << "���� ������ ��������� ������ ������� 1, � �������� ������ 2:\n";
		cin >> a;
	}
}