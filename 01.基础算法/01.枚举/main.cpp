/////////////////////////////////回文日期/////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n1, n2;
//	cin >> n1 >> n2;
//	int day[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int ret = 0;
//	for (int i = 1; i <= 12; i++)
//	{
//		for (int j = 1; j <= day[i]; j++)
//		{
//			int y = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
//			y = y * 10000 + i * 100 + j;
//			if (y >= n1 && y <= n2) ret++;
//		}
//	}
//	cout << ret;
//
//
//	return 0;
//}


/////////////////////////////////铺地毯/////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int n;
//int a[N], b[N], g[N], k[N];
//int x, y;
//
//int find()
//{
//	for (int i = n; i > 0; i--)
//	{
//		if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
//			return i;
//	}
//	return -1;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i] >> b[i] >> g[i] >> k[i];
//	}
//	cin >> x >> y;
//	int f = find();
//	cout << f;
//
//	return 0;
//}


/////////////////////////////////扫雷/////////////////////////////////////////////
#include<iostream>
using namespace std;

const int N = 1e4 + 10;
int a[N], b[N];

int check1(int n)
{
	a[1] = 0;
	for (int i = 2; i <= n + 1; i++)
	{
		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
		if (a[i] < 0 || a[i] > 1) return 0;
	}
	if (a[n + 1] == 0) return 1;
	return 0;
}
int check2(int n)
{
	a[1] = 1;
	for (int i = 2; i <= n + 1; i++)
	{
		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
		if (a[i] < 0 || a[i] > 1) return 0;
	}
	if (a[n + 1] == 0) return 1;
	return 0;
}

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> b[i];
	int ret = 0;
	ret += check1(n);
	ret += check2(n);
	cout << ret;


	return 0;
}