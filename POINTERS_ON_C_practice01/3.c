#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	signed char checksum = -1;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		checksum += ch;
		if ('\n' == ch)
		{
			printf("%d\n", checksum);//�˴���checksum��Ҳ���˻��з�
			checksum = -1;
		}
	}

	system("pause");
	return 0;
}