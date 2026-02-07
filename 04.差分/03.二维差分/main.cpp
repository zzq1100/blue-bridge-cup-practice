#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

typedef long long ll;

const int N = 1010;

ll ini[N][N] = {0};
ll f[N][N] = {0};

int main()
{
	int n, m, q;
	cin >> n >> m >> q;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> ini[i][j];
		}
	}

	ll x1, x2, y1, y2, k;
	while (q--)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> k;
		ini[x1][y1] += k;
		ini[x1][y2 + 1] -= k;
		ini[x2 + 1][y1] -= k;
		ini[x2 + 1][y2 + 1] += k;

	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			f[i][j] = f[i][j - 1] + f[i - 1][j] - f[i - 1][j - 1] + ini[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << f[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}