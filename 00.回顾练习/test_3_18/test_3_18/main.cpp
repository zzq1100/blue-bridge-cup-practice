//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N];
//int main()
//{
//    // 优化输入输出速度
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a + 1, a + 1 + n, greater<int>());
//    for (int i = 1; i <= n; i++)
//    {
//        if (a[i] < i)
//        {
//            cout << "NO" << endl;
//            return 0;
//        }
//    }
//    cout << "YES" << endl;
//
//
//    return 0;
//}
//ios_base::sync_with_stdio(false)


#include <iostream>
#include<algorithm>
using namespace std;

const int N = 1e6 + 10;
int a[N];

int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int l = 1, r = 2, ret = 0;
    for (l = 1; l < n; l++)
    {
        for (r = 2; r <= n; r++)
        {
            if (a[r] - a[l] == 1)
            {
                ret++;
                a[r] = -10000;
                break;
            }
        }
    }
    cout << ret << endl;

    return 0;
}