#include<iostream>
#include<algorithm>
using namespace std;

const int N = 2510;

struct node
{
	int x; // 防晒强度
	int y; // 瓶数
}cow[N], spf[N];

bool cmp(const node& i, const node& j)
{
	return i.x > j.x;
}

int main()
{
	int c, l; cin >> c >> l;

	for (int i = 1; i <= c; i++)
	{
		cin >> cow[i].x >> cow[i].y;
	}
	for (int i = 1; i <= l; i++)
	{
		cin >> spf[i].x >> spf[i].y;
	}

	sort(cow + 1, cow + 1 + c, cmp);
	sort(spf + 1, spf + 1 + l, cmp);
	
	int ret = 0;
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= l; j++)
		{
			if (spf[j].y == 0) continue;
			if (spf[j].x > cow[i].y) continue;
			if (spf[j].x < cow[i].x) break;
			ret++;
			spf[j].y--;
			break;
		}
		
	}
	cout << ret;

	return 0;
}