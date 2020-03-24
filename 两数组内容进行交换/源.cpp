#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, temp;
	int a[10], b[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for(i = 0; i < 10; i++)
	{
		scanf_s("%d", &b[i]);
	}
	//Êý×é½»»»
	for(i = 0;i<10;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	system("pause");
	return 0;

}