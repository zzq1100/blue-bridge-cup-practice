#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
const int N = 10000;

void func(char* s, char* t)
{
	int i = 0, j = 0;
	while (s[i] != '\0') i++;
	while (t[j] != '\0') j++;
	int c = 0, m;
	for (int m = i; m <= i + j + 1; m++)
	{
		s[m] = t[c];
		c++;
	}
}

int main()
{
	char s[N], t[N];
	scanf("%s", s);
	scanf("%s", t);
	func(s, t);
	printf("%s\n%s", s, t);

	return 0;
}