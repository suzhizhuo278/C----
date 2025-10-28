#include<stdio.h>
#include<math.h>
int main()
{
	//输入x，大于1000或<=0就输出0,否则继续输入直到输出x的平方根
	int x;
	scanf_s("%d", &x,1);
	while(1)
	{
		if (x > 1000 || x <= 0)
		{
			printf("0\n");
			scanf_s("%d", &x,1);
		}
		else
		{
			printf("%d\n", (int)(sqrt(x)));
			break;
		}
	}
	return 0;
}