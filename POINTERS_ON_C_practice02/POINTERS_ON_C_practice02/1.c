#include<stdio.h>
#include<stdlib.h>

extern int increment(int a);
extern int negate(int a);


int main1()
{
	int a = 10;
	int b = 0;
	int c = -10;

	printf("%d %d %d\n", increment(a), increment(b), increment(c));
	printf("%d %d %d\n", negate(a), negate(b), negate(c));

	system("pause");
	return 0;
}