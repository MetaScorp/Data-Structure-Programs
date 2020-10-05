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
	printf("Sorting array using selection sort...\n");
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Now the Array after sorting is :\n");
	for(i=0; i<size; i++)
	{
		printf("%d  ",arr[i]);
	}
	getch();
}
