#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

string s;
int mp[26];

int main()
{
	cin >> s;

	int n = s.size();
	int left = 0, right = 0, kind = 0, ret = n;
	
	while (right < n)
	{
		if (mp[s[right] - 'a']++ == 0) kind++;

		while (kind == 26)
		{
			ret = min(ret, right - left + 1);
			if (mp[s[left] - 'a']-- == 1) kind--;
			left++;
		}
		right++;
	}
	cout << ret << endl;

	return 0;
}