#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
using namespace std;

const int N = 1e3 + 10, M = 1e3 + 10;


int main()
{
	int n, m, q;
	cin >> n >> m >> q;

	long long arr1[N][M] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr1[i][j];
		}
	}

	long long arrf[N][M] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arrf[i][j] = arrf[i - 1][j] + arrf[i][j - 1] - arrf[i - 1][j - 1] + arr1[i][j];
		}
	}

	int x1, y1, x2, y2;
	while (q--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		long long ret = arrf[x2][y2] - arrf[x1 - 1][y2] - arrf[x2][y1 - 1] + arrf[x1 - 1][y1 - 1];
		cout << ret << endl;
	}

	return 0;
}