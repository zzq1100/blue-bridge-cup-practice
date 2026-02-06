#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 5e3 + 10;
const int M = 5e3 + 1;

int arr1[N][N] = { 0 };
int arrf[N][N] = { 0 };

int main()
{
	int n, m;
	cin >> n >> m;
	
	while (n--)
	{
		int x, y, v;
		cin >> x >> y >> v;
		x++, y++;
		arr1[x][y] += v;
	}
	
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			arrf[i][j] = arrf[i - 1][j] + arrf[i][j - 1] - arrf[i - 1][j - 1] + arr1[i][j];
		}
	}

	long long a = min(m, M);
	long long ret = 0;
	for (int x2 = a; x2 <= M; x2++)
	{
		for (int y2 = a; y2 <= M; y2++)
		{
			int x1 = x2 - a + 1, y1 = y2 - a + 1;
			long long ret2 = arrf[x2][y2] - arrf[x1 - 1][y2] - arrf[x2][y1 - 1] + arrf[x1 - 1][y1 - 1];
			ret = max(ret2, ret);
		}
	}

	cout << ret << endl;

	return 0;
}

