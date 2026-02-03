#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 1e5 + 10;


int main()
{
	int n, m;
	cin >> n >> m;

	long long arr_first[N];
	for (int i = 1; i <= n; i++)
	{
		cin >> arr_first[i];
	}

	long long arr_temp[N] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		arr_temp[i] = arr_temp[i - 1] + arr_first[i];
	}

	int l, r;
	for (int i = 0; i < m; i++)
	{
		cin >> l >> r;
		cout << arr_temp[r] - arr_temp[l - 1] << endl;
	}

	return 0;
}