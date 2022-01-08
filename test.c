#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int seconds = 0;
//	scanf("%d", &seconds);
//	int a = seconds / 3600;
//	int b = a % 60;
//	int c = b % 60;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	float sum = a + b + c;
//	float ave = (a + b + c) / 3.0;
//	printf("%.2f %.2f", sum, ave);
//	return 0;
//}


//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("                     \n");
//	printf("---------------------\n");
//	printf("                     \n");
//	printf("Jack     18     man  \n");
//	return 0;
//}

//int main()
//{
//	float price = 0;
//	int month = 0;
//	int day = 0;
//	int cup = 0;
//	scanf("%f%d%d%d", &price, &month, &day,&cup);
//	if (month == 11 && day == 11)
//	{
//		price *= 0.7;
//		if (cup == 1)
//			price -= 50;
//	}
//	else if (month == 12 && day == 12)
//	{
//		price *= 0.8;
//		if (cup == 1)
//			price -= 50;
//	}
//	if (price < 0.0)
//		price = 0.0;
//	printf("%.2f\n", price);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (score[j] < score[j + 1])
//			{
//				int tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", score[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	char arr[100] = { 0 };
//	gets(arr);
//	while(arr[i]!='0')
//	{
//		if (arr[i] == 'A')
//		{
//			a++;
//		}
//		else if(arr[i] == 'B')
//		{
//			b++;
//		}
//		i++;
//	}
//	if (a > b)
//		printf("A");
//	else if (a < b)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}


