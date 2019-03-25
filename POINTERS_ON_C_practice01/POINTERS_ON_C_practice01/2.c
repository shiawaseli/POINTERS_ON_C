#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int i = 1, flag = 1;
	char ch = ' ';

	while ((ch = getchar()) != EOF)
	{
		if (1 == flag)
		{
			flag = 0;
			printf("%d ", i++);
		}
		putchar(ch);
		if ('\n' == ch)
		{
			flag = 1;
		}
	}

	system("pause");
	return 0;
}