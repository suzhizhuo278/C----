#include<stdio.h>
#include<math.h>
int main()
{
	//����x������1000��<=0�����0,�����������ֱ�����x��ƽ����
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