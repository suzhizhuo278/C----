#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//�����������������λ����ƽ����
	int n;
	scanf_s("%d", &n, 1);
	int sum = 0;
	while (n)
	{
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	printf("%d\n", sum);
	return 0;
}