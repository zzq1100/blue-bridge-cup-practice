#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
const int N = 1e5 + 10;
// 1.排序，去重，二分

//int a[N];
//int disc[N];
//int pos;

//int find(int x)
//{
//	int l = 1, r = pos;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (disc[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return l;
//}
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		disc[i] = a[i];
//	}
//
//	sort(disc + 1, disc + 1 + n);
//	pos = unique(disc + 1, disc + 1 + n) - (disc + 1);
//
//	for (int i = 1; i <= pos; i++)
//	{
//		int x = a[i];
//		cout << find(x) << endl;
//	}
//
//	return 0;
//}


// 2.排序，STL

int a[N];
int disc[N];
unordered_map<int, int> id;

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		disc[i] = a[i];
	}

	sort(disc + 1, disc + 1 + n);

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		int x = disc[i];
		if (id.count(x)) continue;
		cnt++;
		id[x] = cnt;
	}

	for (int i = 1; i <= n; i++)
	{
		int x = a[i];
		cout << id[a[i]] << endl;
	}

	return 0;
}