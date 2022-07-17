//#include<stdio.h>
//
//int main()
//{
//	int arr[11];
//	arr[1] = 1;
//	printf("%4d\n",arr[1]);
//	for (int i = 2; i<= 10; i++)
//	{
//		arr[i] = 1;
//		for (int j = 2; j < i; j++)
//		{
//			arr[j]=arr[j-1]+arr[j];
//		}
//
//		for (int z = 1; z <= i; z++)
//		{
//			printf("%4d", arr[z]);
//		}
//		printf("\n");
//
//
//
//	}
//
//
//	return 0;
//}


#include<stdio.h>

int main()
{
	int arr[11];
	arr[1] = 1;
	printf("%-4d\n", arr[1]);
	for (int i = 2; i <= 10; i++)
	{
		arr[i] = 1;
		for (int j = i-1; j>=2; j--)
		{
			arr[j] = arr[j - 1] + arr[j];
		}

		for (int z = 1; z <= i; z++)
		{
			printf("%-4d", arr[z]);
		}
		printf("\n");



	}


	return 0;
}