#include<stdio.h>
struct student_records 
{
	char name [50];
	int prn;
	int age;
}s[5];
main()
{
	int i;
	printf("Enter information of students:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter name:");
		scanf("%s",s[i].name);
		printf("Enter prn number");
		scanf("%d",&s[i].prn);
		printf("Enter age of the student");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<5;i++)
	{
		printf("Prn number: %d\n",s[i].prn);
		printf("Name: %s\n",s[i].name);
		printf("Age: %d",s[i].age);
	}

}

