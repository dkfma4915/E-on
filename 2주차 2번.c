#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int iValue[10], menu, iCount = 0, data, x;

	printf("===========�޴�==========\nPush : 1\nPop : 2\nShow : 3\n");
	printf("(�����Ϸ��� 1,2,3 �̿��� �� �Է�)\n");

	while (1)
	{
		printf("\n�޴��� �����ϼ��� : ");
		scanf("%d", &menu);

		if (menu == 1)
		{
			if (iCount > 9)
			{
				printf("���̻� ������ �� �����ϴ�.");
			}
			else
			{
				printf("���Է� : ");
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
				printf("���̻� ������ ������ �����ϴ�.");
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
	printf("========= ���� ���α׷��� �����մϴ� ===========\n");
}