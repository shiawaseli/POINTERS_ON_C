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
		printf("'{'��'}'�ɶԳ���\n ");
	}
	else
	{
		printf("'{'��'}'���ɶԳ���\n ");
	}

	system("pause");
	return 0;
}