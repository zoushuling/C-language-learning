#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int start[10] = {0,0,0,0,0,0,0,0,0,0};
	int terminal[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int known[10] = { 0,0,0,0,0,0,0,0,0,0 };
	printf("������������յ㣬��������0 0��ǰ��������\n");
	for (int i = 0; i <= 9 ; i++)
	{
		scanf("%d",&start[i]);
		scanf("%d",&terminal[i]);
		if (start[i]==0||terminal[i]==0)//��ֹ���벻��ʮ�����ݵĽ������
		{
			break;
		}
	}
	int time = 0, people = 0, floor = 1;
	for (int add = 0;;add=0)//ѭ������
	{
		for (; floor <= 10; floor++, time++)//��¥ѭ��
		{
			for (int n = 0; n <= 9; n++)//¥��ɨ��
			{
				if (known[n] == floor)
				{
					people--;
					terminal[n] = 0;
					known[n] = 0;//��ֹ�ظ��¿�,��������ж���������
					printf("¥��%d ʱ��%d ����%d\n", floor, time, people);
				}//�¿��ж�
				if (people >= 4)
				{
					continue;
				}//�����ж�
				if (start[n] == floor)
				{
					people++;
					known[n] = terminal[n];//�õ���֪������֪����
					start[n] = 0;//��ֹ�ظ��ӿ�,��������ж���������
					printf("¥��%d ʱ��%d ����%d\n", floor, time, people);
				}//�Ͽ��ж�
			}
			if (floor == 10)
			{
				break;
			}
		}
		for (; floor >= 1; floor--, time++)//��¥ѭ��
		{
			for (int n = 0; n <= 9; n++)//¥��ɨ��
			{
				if (known[n] == floor)
				{
					people--;
					terminal[n] = 0;
					known[n] = 0;//��ֹ�ظ��¿�,��������ж���������
					printf("¥��%d ʱ��%d ����%d\n", floor, time, people);
				}//�¿��ж�
				if (people >= 4)
				{
					continue;
				}//�����ж�
				if (start[n] == floor)
				{
					people++;
					known[n] = terminal[n];//�õ���֪������֪����
					start[n] = 0;//��ֹ�ظ��ӿ�,��������ж���������
					printf("¥��%d ʱ��%d ����%d\n", floor, time, people);
				}//�Ͽ��ж�

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