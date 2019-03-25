#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	int num = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '{')
		{
			num++;
		}
		if (ch == '}')
		{
			num--;
		}
	}
	if (num == 0) {
		printf("'{'和'}'成对出现\n ");
	}
	else
	{
		printf("'{'和'}'不成对出现\n ");
	}

	system("pause");
	return 0;
}