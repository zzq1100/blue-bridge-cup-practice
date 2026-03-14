#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;
ll ini[N] = { 0 };
ll f[N] = { 0 };

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> ini[i];
	}

	for (int i = 1; i <= m - 1; i++)
	{
		int tmp1 = ini[i];
		int tmp2 = ini[i + 1];
		if (tmp1 > tmp2)
		{
			swap(tmp1, tmp2);
		}
		f[tmp1]++;
		f[tmp2]--;
	}

	for (int i = 1; i <= n - 1; i++)
	{
		ini[i] = ini[i - 1] + f[i];
	}

	ll ret = 0;
	ll A, B, C;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> A >> B >> C;
		ret += min(A * ini[i], C + B * ini[i]);
	}

	cout << ret;

	return 0;
}