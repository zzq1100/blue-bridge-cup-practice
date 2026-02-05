#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 2 * 1e5 + 10;

int main()
{
	int n;
	cin >> n;

	int arr1[N] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		cin >> arr1[i];
	}

	int arrf[N] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		arrf[i] = arrf[i - 1] + arr1[i];
	}

	int prevmin = 0;
	int ret = arrf[1];
	for (int i = 1; i <= n; i++)
	{
		ret = max(arrf[i] - prevmin, ret);
		prevmin = min(prevmin, arrf[i]);

	}

	cout << ret << endl;



	return 0;
}