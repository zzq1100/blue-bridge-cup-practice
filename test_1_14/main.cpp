//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int arr1[N], arr2, arr3[N];
//int l1, l3;
//
//void Sub()
//{
//	long long t = 0;
//	for (int i = l3 - 1; i >= 0; i--)
//	{
//		t = t * 10 + arr1[i];
//		arr3[i] = t / arr2;
//		t %= arr2;
//	}
//	while (l3 > 1 && arr3[l3 - 1] == 0) l3--;
//}
//
//int main()
//{
//	string s1; cin >> s1;
//	cin >> arr2;
//	l1 = s1.size();
//	l3 = l1;
//	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s[i] - '0';
//	Sub();
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//
//	return 0;
//}



//const int N = 1e4 + 10;
//int a1[N], a2[N], a3[N], a4[N];
//
//int find(int n, int x, int y)
//{
//	for (int i = n; i >= 1; i--)
//	{
//		if (x >= a1[i] && y >= a2[i] && x <= a1[i] + a3[i] && y <= a2[i] + a4[i])
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n; 
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a1[i] >> a2[i] >> a3[i] >> a4[i];
//	}
//	int x, y;
//	cin >> x >> y;
//	cout << find(n, x, y) << endl;
//
//
//	return 0;
//}



//int main()
//{
//	int date1, date2;
//	cin >> date1 >> date2;
//	int day[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//	int count = 0;
//	for (int i = 1; i <= 12; i++)
//	{
//		for (int j = 1; j <= day[i]; j++)
//		{
//			int k = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
//			int date3 = k * 10000 + i * 100 + j;
//			if (date3 >= date1 && date3 <= date2)
//			{
//				count++;
//			}
//		}
//	}
//	cout << count << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//const int N = 1e4 + 10;
//int a[N], b[N];
//
//bool func(int n, int c)
//{
//	a[0] = 0;
//	a[1] = c;
//	for (int i = 2; i <= n + 1; i++)
//	{
//		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
//		if (a[i] < 0 || a[i] > 1)
//			return false;
//	}
//	if (a[n + 1] != 0) return false;
//	else
//		return true;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	b[0] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	int count = 0;
//	for (int i = 0; i <= 1; i++)
//	{
//		if (func(n, i))
//			count++;
//	}
//	cout << count;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//const int N = 1e4 + 10;
//int a[N], b[N];
//
//bool func(int n, int c)
//{
//	a[0] = 0;
//	a[1] = c;
//	for (int i = 2; i <= n + 1; i++)
//	{
//		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
//		if (a[i] < 0 || a[i] > 1)
//			return false;
//	}
//	if (a[n + 1] != 0) return false;
//	else
//		return true;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	b[0] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	int count = 0;
//	for (int i = 0; i <= 1; i++)
//	{
//		if (func(n, i))
//			count++;
//	}
//	cout << count;
//
//	return 0;
//}

#include<iostream>
using namespace std;

const int N = 1e4 + 10;
int a[N], b[N];

bool func(int n, int c)
{
	a[0] = 0;
	a[1] = c;
	for (int i = 2; i <= n + 1; i++)
	{
		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
		if (a[i] < 0 || a[i] > 1)
			return false;
	}
	if (a[n + 1] != 0) return false;
	else
		return true;
}

int main()
{
	int n;
	cin >> n;
	b[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}
	int count = 0;
	for (int i = 0; i <= 1; i++)
	{
		if (func(n, i))
			count++;
	}
	cout << count;

	return 0;
}