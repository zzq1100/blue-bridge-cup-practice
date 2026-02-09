#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 1010;

int f[N][N] = { 0 };

void insert(int x1, int y1, int x2, int y2)
{
	f[x1][y1] += 1;
	f[x1][y2 + 1] -= 1;
	f[x2 + 1][y1] -= 1;
	f[x2 + 1][y2 + 1] += 1;
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		insert(x1, y1, x2, y2);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + f[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << f[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}