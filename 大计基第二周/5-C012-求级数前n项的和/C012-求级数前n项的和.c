#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	scanf_s("%d", &n, 1);
	
	float sum = 0;
	for (int i=1;i<=n;i++)
	{
		if (i % 2 == 1) 
			sum += (float)(1 / (float)(2 * i - 1));
		else
			sum -= (float)(1 / (float)(2 * i - 1));
	}

	printf("%.4f\n", sum);
	return 0;
}