#include<stdio.h>
int main() {
//����ʵ�֣�
// 1.��ȡisbn������sum
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
	// 2.����reminder
	int reminder = sum % 11;
	// 3.���������ǲ���10������Ǿ���X��ʾ,���Ǿ���reminder��ʾ
	char check=' ';
	if (reminder == 10)
		check = 'X';
	else
		check = reminder + '0';
	// 4.���������check�Ƿ�һ�£���һ�¾������ȷ��isbn
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