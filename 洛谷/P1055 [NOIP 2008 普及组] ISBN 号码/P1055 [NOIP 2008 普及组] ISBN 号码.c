#include<stdio.h>
int main() {
//功能实现：
// 1.读取isbn并计算sum
	char isbn[13];
	scanf_s("%s", isbn, 20);
	int sum = 0,count = 1;
	for (int i = 0; i < 12; i++) {
		if (isbn[i] != '-')
		{
			sum = (int)(isbn[i] - '0') * count + sum;
			count++;
		}

	}
	// 2.计算reminder
	int reminder = sum % 11;
	// 3.检验余数是不是10，如果是就用X表示,不是就用reminder表示
	char check=' ';
	if (reminder == 10)
		check = 'X';
	else
		check = reminder + '0';
	// 4.检验输入和check是否一致，不一致就输出正确的isbn
	if (check == isbn[12])
		printf("Right");
	else
	{
		for (int i = 0; i < 12; i++)
			printf("%c", isbn[i]);
		printf("%c", check);
	}


	return 0;
}