#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1010;

struct node
{
	int _index;
	int _cnt;
}row[N], col[N];

bool tmp1(const node& x, const node& y)
{
	return x._cnt > y._cnt;
}

bool tmp2(const node& x, const node& y)
{
	return x._index < y._index;
}

int main()
{
	int M, N, K, L, D; cin >> M >> N >> K >> L >> D;

	for (int i = 1; i <= M; i++) row[i]._index = i;
	for (int i = 1; i <= N; i++) col[i]._index = i;

	while (D--)
	{
		int x, y, p, q; cin >> x >> y >> p >> q;

		if (x == p) col[min(y, q)]._cnt++;
		if (y == q) row[min(x, p)]._cnt++;
	}

	// 按 _cnt 从大到小进行排序
	sort(row + 1, row + 1 + M, tmp1);
	sort(col + 1, col + 1 + N, tmp1);

	// 按 _index 从小到大进行排序
	sort(row + 1, row + 1 + K, tmp2);
	sort(col + 1, col + 1 + L, tmp2);

	for (int i = 1; i <= K; i++)
	{
		cout << row[i]._index << " ";
	}
	cout << endl;
	for (int i = 1; i <= L; i++)
	{
		cout << col[i]._index << " ";
	}
	cout << endl;

	return 0;
}