#include<stdio.h>
#include<conio.h>
struct student{
	int rollNo;
	char name[50];
	char department[50];
	char course[25];
	int year;
	
};

void data(struct student[],int);
void names(struct student[],int);


int main()
{	int years;
	struct student studentDetails[450]={1,"Anish", "BBA", "management", 2075,
	                          2,"Ashish","Arts","English",2074,
	                          3,"Roshan","IT","Digital logic",2074,
							  4,"Sujana","AG","Biology",2075,
							  5,"Santosh","BE","Physics",2073,
						      6,"Prakash", "BscCsit", "C programming", 2074,
						      7,"Prajwol","BBA","Account",2073,
	   						  8,"Chinmaya","Arts","Psychology",2074
                           	};
	printf("Enter the year to view the name of Student joined in that year :");
	scanf("%d",&years);
	printf("\nDate of students joined in %d",years);
	data(studentDetails,years);
	printf("+++++++++++++++***+++++++++++++++");
	printf("\nNames of students joined in %d",years);
	names(studentDetails,years);
}



void data(struct student a[],int years)
{ int i;
	for(i=0;i<450;i++)
	{
		if(a[i].year==years && a[i].year!=0)
		{
			printf("\nRoll:%d",a[i].rollNo);
			printf("\nName:%s",a[i].name);
			printf("\nDepartment:%s",a[i].department);
			printf("\nCourse:%s",a[i].course);
			printf("\nJoined year:%d",a[i].year);
		}
		
	}
}
void names(struct student a[], int years)
{
  int i;
	for(i=0;i<450;i++)
	{
		if(a[i].year==years && a[i].year!=0)
		{
			printf("\nName:%s",a[i].name);
		}
		
	}	
}
