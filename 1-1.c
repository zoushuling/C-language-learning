#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;//AΪ���
	int B = 0;//BΪ�յ�
	int C = 0;//CΪ�������ڴ�
	scanf("%d %d %d", &A, &B, &C);
	printf("%d 0 0\n", C);
	int t = (A > C) ? A - C : C - A;//tΪʱ��
	printf("%d %d 1\n", A,t);
	t = (A > B) ? (t + A - B) : (t + B - A);
	printf("%d %d 0\n", B,t);
	return 0;
}