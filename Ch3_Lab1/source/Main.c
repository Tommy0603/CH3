#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d", &n);
	printf("�аݭn�_�ƩM(O)�٬O���ƩM(E)�٬O��ƩM(I)?�п�ܡG");
	scanf_s(" %c",&AddChoice);

	switch (AddChoice)
	{
		case 'O':
			Sum = Odd(n);
			break;
		case 'E':
			Sum = Even(n);
			break;
		case 'I':
			Sum = TotalSum(n);
			break;
		default:
			printf("��ܿ��~\n");
			return - 1;
	}
	printf("�`�X��%d\n",Sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, Total = 0;
	for (i = 0; i <= U; i++)
	{
		if (i % 2 == 1)
			Total = Total + i;
	}
	return Total;
}
int Even(int U)
{
	int i, Total = 0
		;
	for (i = 0; i <= U; i++)
	{
		if (i % 2 == 0)
			Total = Total + i;
	}
	return Total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}