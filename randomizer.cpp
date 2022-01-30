#include<iostream>
#include<cstdlib>
#include<vector>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	cout << "enter the number of options:\n";
	int n;
	cin >> n;
	cout << "enter the names of these options in English:\n";
	vector<string> m(n);
	for (int i = 0; i < m.size(); i++)
	{
		cin >> m[i];
	}
	int a = rand() %m.size() + 0;
	cout << "by chance , the option won " << m[a];
}