#include<stdio.h>
int main()
{
	int num[3];
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &num[i],1);
	}
	for (int i = 0; i < 3; i++)
	{
		for(int j=0;j<num[i];j++)printf("*");
		printf("\n");
	}
	return 0;
}