#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//����һ���������жϸ�λ����֮������������ż��
	char x[5000];
	scanf_s("%s", x,4999);
	int flag = 0;
	int len = strlen(x);
	int sum = 0;//ͳ���ַ���������������
	for (int i = 0; i < len; i++)
	{
		sum += ( (x[i] - '0')%2==1 );
	}
	if(sum%2 == 1)printf("1\n");
	else printf("0\n");
	return 0;
}