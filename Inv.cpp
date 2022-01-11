#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 1, n;
	double k1, k2, t;
	while (a == 1)
	{
		cout << "введите количество купленных акций:\n";
		cin >> n;
		cout << "введите цену одной акции при покупке:\n";
		cin >> k1;
		cout << "введите цену одной акции при продаже:\n";
		cin >> k2;
		cout <<"чистая прибыль равна "<< n*(k2-k1-(k2+k1)*0.003) << '\n';
		cout << "сумма комиссии равна " << n * (k2 + k1) * 0.003 << '\n';
		cout << "\n";
		cout << "если хотете повторить рачеты введите 1, в обратном случае 2:\n";
		cin >> a;
	}
}