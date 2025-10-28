#include<stdio.h>
int main() {
	//问题抽象：
	// 1.每月+300固定
	// 2.算法固定，整百一定会存回去
	// 3.风险就在于如果原定预算太高，而且上个月存的也多，就可能超额
	// 根据12个月的预算，判断会不会出现压缩预算的情况
	//要求输出-X月或者最终手上的钱！

	//整道题的全流程
	//1.读取12个月预算
	int budget[12];
	for(int i=0;i<12;i++)
		scanf("%d", &budget[i]);
	
	//2.反复更新手上的钱，如果出现负数就break输出对应月份
	int money = 0,bank = 0, X = 0;
	for (int i = 0; i < 12; i++)
	{
		money += 300;//固定+300
		//判断本月（i+1）是否超额
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
			//判断是否能存钱
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


	//3.否则输出手上的钱
	if(X==0)
		printf("%d", money + (int)((float)(bank)*1.2));


	return 0;
}