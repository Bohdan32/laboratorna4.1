#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int l, N, i;
	double S;
	cout << "l = "; cin >> l;
	cout << "N = "; cin >> N;
	S = 0;
	i = l;
	while (i <= N)
	{
		S += (1 + (i / N)) / (i * i);
		i++;
	}
	cout << S << endl;
	S = 0;
	i = l;
	do {
		S += (1 + (i / N)) / (i * i);
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = l; i <= N; i++)
	{
		S += (1 + (i / N)) / (i * i);
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= l; i--)
	{
		S += (1 + (i / N)) / (i * i);
	}
	cout << S << endl;
	return 0;
}