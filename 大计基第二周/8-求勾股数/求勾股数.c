#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//����a<b<c��a^2+b^2=c^2������(������Χ����������
	int m, n;
	scanf_s("%d %d", &m, &n, 1, 1);
	int count = 0;
	for (int a = m; a <= n; a++)
	{
		for (int b = a + 1; b <= n; b++)
		{
			for (int c = b + 1; c <= n; c++)
			{
				if (a * a + b * b == c * c)
				{
					count++;
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}