#include<stdio.h>
#include<math.h>
#include<string.h>

int multiple(int x)
{
	return x % 7 == 0;
}

int contain7(int x)
{
	while (x)
	{
		if (x % 10 == 7)return 1;
		x /= 10;//去掉最后一位！！
	}
	return 0;
}




int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n, 1, 1);

	for (int i = m; i <= n; i++)
	{
		if (multiple(i))
		{
			printf("%d is a multiple of 7\n", i);
		}
		if(contain7(i))
		{
			printf("%d contains 7\n", i);
		}
	}
	return 0;
}