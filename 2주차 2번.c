#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int iValue[10], menu, iCount = 0, data, x;

	printf("===========메뉴==========\nPush : 1\nPop : 2\nShow : 3\n");
	printf("(종료하려면 1,2,3 이외의 수 입력)\n");

	while (1)
	{
		printf("\n메뉴를 선택하세요 : ");
		scanf("%d", &menu);

		if (menu == 1)
		{
			if (iCount > 9)
			{
				printf("더이상 저장할 수 없습니다.");
			}
			else
			{
				printf("수입력 : ");
				scanf("%d", &data);
				iValue[iCount] = data;
				iCount++;

				{

				}
			}
		}
		else if (menu == 2)
		{
			if (iCount < 0)
			{
				printf("더이상 삭제할 스택이 없습니다.");
			}
			else
			{
				iCount--;
				iValue[iCount] = 0;
			}
		}
		else if (menu == 3)
		{
			for (x = 0; x < iCount; x++)
			{
				if (iValue[x] == 0)
				{
					break;
				}
				printf("%d ", iValue[x]);
			}
		}
		else
			break;
	}
	printf("========= 스택 프로그램을 종료합니다 ===========\n");
}