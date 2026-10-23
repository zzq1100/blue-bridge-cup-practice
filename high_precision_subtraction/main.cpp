#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int sub1[N] = {0}, sub2[N] = {0}, ret[N] = {0};

bool cmp(string& s1, string& s2)
{
    if (s1.size() != s2.size()) return s1.size() < s2.size();
    else return s1 < s2;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (cmp(s1, s2)) 
    {
        swap(s1, s2);
        cout << '-';
    }

    int lsub1 = s1.size(), lsub2 = s2.size();
    int lret = max(lsub1, lsub2);

    for (int i = 0; i < lsub1; i++) sub1[i] = s1[lsub1 - i - 1] - '0';
    for (int i = 0; i < lsub2; i++) sub2[i] = s2[lsub2 - i - 1] - '0';

    for (int i = 0; i < lret; i++)
    {
        ret[i] = sub1[i] - sub2[i];
        if (ret[i] < 0)
        {
            ret[i] += 10;
            sub1[i + 1] -= 1;
        }
    }

    while (ret[lret - 1] == 0 && lret > 1) lret--;

    for (int i = lret - 1; i >= 0; i--) cout << ret[i];

    return 0;
}