#include<stdio.h>
int main() {
	//�������
	// 1.ÿ��+300�̶�
	// 2.�㷨�̶�������һ������ȥ
	// 3.���վ��������ԭ��Ԥ��̫�ߣ������ϸ��´��Ҳ�࣬�Ϳ��ܳ���
	// ����12���µ�Ԥ�㣬�жϻ᲻�����ѹ��Ԥ������
	//Ҫ�����-X�»����������ϵ�Ǯ��

	//�������ȫ����
	//1.��ȡ12����Ԥ��
	int budget[12];
	for(int i=0;i<12;i++)
		scanf("%d", &budget[i]);
	
	//2.�����������ϵ�Ǯ��������ָ�����break�����Ӧ�·�
	int money = 0,bank = 0, X = 0;
	for (int i = 0; i < 12; i++)
	{
		money += 300;//�̶�+300
		//�жϱ��£�i+1���Ƿ񳬶�
		if (money < budget[i])
		{
			X = i + 1;
			printf("-%d\n", X);
		//	printf("money=%d\n",money);
			break;
		}
		else
		{
		//	printf("money=%d\n", money);
		//	printf("bank=%d\n", bank);
			//�ж��Ƿ��ܴ�Ǯ
			if ((money - budget[i]) / 100 > 0)
			{
				bank += (money - budget[i]) / 100 * 100;
				money -= (money - budget[i]) / 100 * 100;
				money -= budget[i];
				
			}
			else
			{
				money -= budget[i];
			}
		}
	}


	//3.����������ϵ�Ǯ
	if(X==0)
		printf("%d", money + (int)((float)(bank)*1.2));


	return 0;
}