#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main4()
{
	char str1[1000], str2[1000];
	int max = INT_MIN, len = 0;

	while (gets(str1) != NULL)
	{
		len = strlen(str1);
		if (len >= max)
		{
			strcpy(str2, str1);
			max = len;
		}
	}
	printf("%s\n", str2);

	system("pause");
	return 0;
}