#include<stdio.h>
//int main()
//{	
//	/*int arr1[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("&arr1[%d] = %p\n", i, &arr1[i]);
//	}*/
//	int arr2[3][4];
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{	
//		for ( j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d] = %p\n", i, j, &arr2[i][j]);
//		}
//	}
//	return 0;
//}

//void maopao(int arr[], int length)
//{
//	int i = 0; 
//	int j = 0;
//	int flag = 0;
//	for ( i = 0; i < length - 1; i++)
//	{
//		for ( j = 0; j < length - 1 - i; j++)
//		{
//			flag = 1;//���豾��Ҫ����������������
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//������������в��������
//			}
//		}
//		if (flag == 1 )
//		{
//			break;//����ѭ�����ټ�����
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,5,2,67,9,63,24,11,10,8,21 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, length);
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5 };*/
//	int arr[40] = { 0 };
//	printf("%d", sizeof(arr));
//	/*printf("%p\n", arr);*/
//	/*printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);*/
//	return 0;
//}