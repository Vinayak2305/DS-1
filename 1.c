#include<stdio.h>
#include<conio.h>
struct student
{
	int enrollment;
	char name[30];
	int grade;
	float per ;
};
int main()
{
	struct student *ptr;
	int n,i;
	
	printf("\nEnter the no. of records:");
	scanf("%d",&n);
	ptr=(struct student*)malloc(n*sizeof(struct student));
	
	
	if(ptr==NULL)
	{
		printf("\nMemory allocation failed");
		return 0;
	}
	
	for(i=1;i<=n;i++)
	{	
		printf("\nEnter Your Name:");
		scanf("%s",(ptr+i)->name);
		printf("\nEnter Your Enrollment No:");
		scanf("%d",&(ptr + i)->enrollment);
		printf("\nEnter Your Standard:");
		scanf("%d",&(ptr+i)->grade);
		printf("\nEnter Your Percentage:");
		scanf("%f",&(ptr+i)->per);
		
	}
	printf("\n\t\t\t   Displaying Information:\n");
	for(i=1;i<=n;i++)
	
	{
 	printf("\n%30s \t %5d \t %5d \t %.2f\n",(ptr+i)->name,(ptr + i)->enrollment,(ptr+i)->grade,(ptr+i)->per);	
	}
	 free(ptr);

  return 0;
}	
	
