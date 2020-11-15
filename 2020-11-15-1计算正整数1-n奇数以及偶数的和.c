//计算正整数1-n奇数以及偶数的和
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	printf("请输入n：");
	scanf("%d",&n);
	for (i = 1; i <= n; i ++)
	{
		if (i % 2 == 0)//判断是否为偶数
		{
			sum1 += i;
		}
		else//判断为奇数
			sum2 += i;
	}
	printf("偶数之和：%d\n奇数之和：%d\n",sum1,sum2);
	return 0;
}