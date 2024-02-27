#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//将一个数组逆序输出
int main()
{
	int arr1[10] = { 0 };
	printf("please input 10 numbers:\n");
	for (int k = 0; k < 10; k++)
	{
		scanf("%d", &arr1[k]);
	}
	printf("the arr1:");
	for (int n = 0; n < 10; n++)
	{
		printf("%-4d", arr1[n]);
	}
	int arr2[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j >= 0; j--)
		{
			if (i + j == 9)
			{
				arr2[j] = arr1[i];
			}
		}
	}
	printf("\nthe arr2:");
	for (int m = 0; m < 10; m++)
	{
		printf("%-4d", arr2[m]);
	}
	return 0;
}