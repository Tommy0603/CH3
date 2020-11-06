#include <stdio.h>
#include <stdlib.h>

long int aa(int a);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = aa(m);
	b = aa(n);
	c = aa(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int aa(int p)
{
	if (p > 1)
	{ 
		long int result = p * aa(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}