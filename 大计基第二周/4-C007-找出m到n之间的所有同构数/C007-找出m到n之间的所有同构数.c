#include<stdio.h>
#include<math.h>
int isomorphism(int x)
{ 
	int len = 0;
	while(1)
	{
		len++;
		if (x / (int)(pow(10, len)) == 0)break;
	}

	if( ((x*x-x)%(int)(pow(10,len)) ) ==0 )return 1;
	else return 0;
}
int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n, 1,1);
	

	int first = 0;
	for (int i = m; i <= n; i++)
	{
		if (first == 0 && isomorphism(i))
		{
			printf("%d", i);
			first = 1;
			continue;
		}
		if(isomorphism(i))
		{
			printf(" %d", i);
		}
	}
	return 0;
}