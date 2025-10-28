#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//输入三个整数，判断是否构成三角形
	float a, b, c;
	float max;
	scanf_s("%f %f %f", &a, &b, &c, 1);
	//max = fmaxf(a, fmaxf(b, c));//找出最大值
	if(a + b > c && a + c > b && b + c > a)
	{
		printf("YES\n");
	}
	else
	{
		printf("ERROR DATA\n");
	}

	return 0;
}