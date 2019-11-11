#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int line, i, j, space, star, iCount;

	printf("숫자를 입력하세요(홀수만) : ");
	scanf("%d", &line);

	space = line / 2;
	star = 1;
	iCount = 0;

	for (i = 0; i <= line; i++)
	{
		for (j = 0; j < space; j++)
		{
			printf(" ");
		}
		for (j = 0; j < star; j++)
			printf("*");

		printf("\n");

		if (i == line / 2)
			iCount = 1;
		if (iCount == 0)
		{
			space--;
			star += 2;
		}
		else
		{
			space++;
			star -= 2;
		}
	}
}