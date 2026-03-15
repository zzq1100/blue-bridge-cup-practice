#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

const int N = 5e4 + 10;

struct node
{
	int x;
	int y;
	int z;

	bool operator<(const node& a) const
	{
		return x > a.x;
	}
}a[N];
int ret[N];

bool cmp(node& x, node& y)
{
	return x.x < y.x;
}

int main()
{
	int n; cin >> n;
	for (int i = 1;i <= n; i++)
	{
		cin >> a[i].x >> a[i].y;
		a[i].z = i;
	}

	sort(a + 1, a + 1 + n, cmp);

	int num = 1;
	priority_queue<node> heap;
	ret[a[1].z] = 1;
	heap.push({ a[1].y, 1 });

	for (int i = 2; i <= n; i++)
	{
		int l = a[i].x, r = a[i].y;
		if (l <= heap.top().x)
		{
			num++;
			ret[a[i].z] = num;
			heap.push({ r, num });
		}
		else
		{
			node t = heap.top(); 
			heap.pop();
			ret[a[i].z] = t.y;
			heap.push({ r, t.y });
		}
	}

	cout << num << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << ret[i] << endl;
	}

	return 0;
}