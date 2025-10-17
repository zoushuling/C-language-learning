#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int start[10] = {0,0,0,0,0,0,0,0,0,0};
	int terminal[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int known[10] = { 0,0,0,0,0,0,0,0,0,0 };
	printf("请输入起点与终点，并以输入0 0提前结束输入\n");
	for (int i = 0; i <= 9 ; i++)
	{
		scanf("%d",&start[i]);
		scanf("%d",&terminal[i]);
		if (start[i]==0||terminal[i]==0)//防止输入不足十组数据的解决方案
		{
			break;
		}
	}
	int time = 0, people = 0, floor = 1;
	for (int add = 0;;add=0)//循环往复
	{
		for (; floor <= 10; floor++, time++)//上楼循环
		{
			for (int n = 0; n <= 9; n++)//楼层扫描
			{
				if (known[n] == floor)
				{
					people--;
					terminal[n] = 0;
					known[n] = 0;//防止重复下客,且让输出判定正常运行
					printf("楼层%d 时间%d 人数%d\n", floor, time, people);
				}//下客判定
				if (people >= 4)
				{
					continue;
				}//超载判定
				if (start[n] == floor)
				{
					people++;
					known[n] = terminal[n];//让电梯知道他该知道的
					start[n] = 0;//防止重复接客,且让输出判定正常运行
					printf("楼层%d 时间%d 人数%d\n", floor, time, people);
				}//上客判定
			}
			if (floor == 10)
			{
				break;
			}
		}
		for (; floor >= 1; floor--, time++)//下楼循环
		{
			for (int n = 0; n <= 9; n++)//楼层扫描
			{
				if (known[n] == floor)
				{
					people--;
					terminal[n] = 0;
					known[n] = 0;//防止重复下客,且让输出判定正常运行
					printf("楼层%d 时间%d 人数%d\n", floor, time, people);
				}//下客判定
				if (people >= 4)
				{
					continue;
				}//超载判定
				if (start[n] == floor)
				{
					people++;
					known[n] = terminal[n];//让电梯知道他该知道的
					start[n] = 0;//防止重复接客,且让输出判定正常运行
					printf("楼层%d 时间%d 人数%d\n", floor, time, people);
				}//上客判定

			}
			if (floor == 1)
			{
				break;
			}
		}
		for (int p = 0; p <= 9; p++)
		{
			add += start[p];
			add += terminal[p];
		}
		if (add = 0)
		{
			break;
		}
	}
	return 0;
}