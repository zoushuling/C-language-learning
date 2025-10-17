#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;//A为起点
	int B = 0;//B为终点
	int C = 0;//C为电梯所在处
	scanf("%d %d %d", &A, &B, &C);
	printf("%d 0 0\n", C);
	int t = (A > C) ? A - C : C - A;//t为时间
	printf("%d %d 1\n", A,t);
	t = (A > B) ? (t + A - B) : (t + B - A);
	printf("%d %d 0\n", B,t);
	return 0;
}