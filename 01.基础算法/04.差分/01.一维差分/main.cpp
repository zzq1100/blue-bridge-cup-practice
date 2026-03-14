#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 1e5 + 10;
long long ini[N] = { 0 };
long long f[N] = { 0 };

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> ini[i];
	}

	for (int i = 1; i <= n; i++)
	{
		f[i] = ini[i] - ini[i - 1];
	}

	int l, r, k;
	while (m--)
	{
		cin >> l >> r >> k;
		f[l] += k;
		f[r + 1] -= k;
	}

	for (int i = 1; i <= n; i++)
	{
		ini[i] = ini[i - 1] + f[i];
	}

	for (int i = 1; i <= n; i++)
	{
		cout << ini[i] << " ";
	}

	return 0;
}