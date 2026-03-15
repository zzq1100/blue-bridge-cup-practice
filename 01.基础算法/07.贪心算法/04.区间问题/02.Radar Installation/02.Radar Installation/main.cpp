#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

const int N = 1010;

struct node1
{
	int x, y;
}island[N];

struct node2
{
	double l, r;
}radar[N];

bool cmp(const node2& x, const node2& y)
{
	return x.l < y.l;
}

int main()
{
	int cnt = 0;
	while (1)
	{
		cnt++;
		int n, d; cin >> n >> d;
		if (n == 0 && d == 0)
			break;

		bool flag = false;
		for (int i = 1; i <= n; i++)
		{
			cin >> island[i].x >> island[i].y;
			if (island[i].y > d)
				flag = true;
		}
		if (flag)
		{
			cout << "Case" << " " << cnt << ":" << " " << -1 << endl;
			continue;
		}

		for (int i = 1; i <= n; i++)
		{
			double l = sqrt(pow(d, 2) - pow(island[i].y, 2));
			radar[i].l = island[i].x - l;
			radar[i].r = island[i].x + l;
		}

		sort(radar + 1, radar + 1 + n, cmp);

		int ret = 1;
		double cur_right = radar[1].r;
		for (int i = 2; i <= n; i++)
		{
			if (radar[i].l <= cur_right)
			{
				cur_right = min(cur_right, radar[i].r);
			}
			else
			{
				ret++;
				cur_right = radar[i].r;
			}
		}

		cout << "Case" << " " << cnt << ":" << " " << ret << endl;
	}



	return 0;
}