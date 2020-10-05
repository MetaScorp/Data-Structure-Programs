#include<stdio.h>
#include<conio.h>
int main()
{
	int size, arr[50], i, j, temp;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	printf("Enter Array Elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Sorting array using selection sort ... \n");
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	printf("Array after sorting : \n");
	for(i=0; i<size; i++)
	{
		printf("%d  ", arr[i]);
	}
	getch();
}
