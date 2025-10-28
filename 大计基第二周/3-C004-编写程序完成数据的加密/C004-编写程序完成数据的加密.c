#include<stdio.h>
int main()
{
	//1.(x[i]+5)%10
	char input[10],output[10];
	scanf_s("%s", input,10);
	//第一步，按规则每位转换
	for(int i=0;i<4;i++)
	{
		output[i] = (input[i] - '0' + 5) % 10 + '0';
	}
	printf("%c%c%c%c\n", output[3], output[2], output[1], output[0]);
	return 0;
}