#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	//���������������ж��Ƿ񹹳�������
	float a, b, c;
	float max;
	scanf_s("%f %f %f", &a, &b, &c, 1);
	//max = fmaxf(a, fmaxf(b, c));//�ҳ����ֵ
	if(a + b > c && a + c > b && b + c > a)
	{
		printf("YES\n");
	}
	else
	{
		printf("ERROR DATA\n");
	}

	return 0;
}