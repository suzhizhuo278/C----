#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//输入正整数，计算各位数字平方和
	int n;
	scanf_s("%d", &n, 1);
	int sum = 0;
	while (n)
	{
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	printf("%d\n", sum);
	return 0;
}