#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
struct dmca
{
	char name[36];
	char reg[36];
	char program[36];
	int sem;
	int marks[6];
	double gpa[6];
	char stat[6];
	
};

int main()
{   
   
	char subject[6][20]={"Communication","Genetics","Calculus","Pak Studies","PPIT","Programming"};
	int totalmarks=100;
	struct dmca std[36];
	double percentage,cgpa,tgpa;
	double otmarks;
	srand(time(0)); 
	for(int i=0;i<2;i++)
	{
		printf("Enter Student %d's Name: \n",i+1);
		gets(std[i].name);
		printf("Roll Number: \n");
		gets(std[i].reg);
		printf("Program: \n");
		gets(std[i].program);
		printf("Semester: \n");
		scanf("%d",&std[i].sem);
		for(int j=0;j<6;j++)
		{
			
			std[i].marks[j]=((rand()%100)+1);
			if(std[i].marks[j]>=85)
			std[i].gpa[j]=4.00;
			else if(std[i].marks[j]>=80)
			std[i].gpa[j]=3.66;
			else if(std[i].marks[j]>=75)
			std[i].gpa[j]=3.33;
			else if(std[i].marks[j]>=70)
			std[i].gpa[j]=3.00;
			else if(std[i].marks[j]>=68)
			std[i].gpa[j]=2.66;
			else if(std[i].marks[j]>=64)
			std[i].gpa[j]=2.33;
			else if(std[i].marks[j]>=61)
			std[i].gpa[j]=2;
			else if(std[i].marks[j]>=58)
			std[i].gpa[j]=1.66;
			else if(std[i].marks[j]>=54)
			std[i].gpa[j]=1.30;
			else if(std[i].marks[j]>=50)
			std[i].gpa[j]=1;
			else 
			std[i].gpa[j]=0;
			if(std[i].gpa[j]>=1)
			std[i].stat[j]='P';
			else
			std[i].stat[j]='F';
			getchar(); 
	}
	}
	
int choice = 1;
int select,no;
do
{
printf("Enter '1' for all students, '2' to search for specific student\n ");
scanf("%d",&select);
if(select == 1)
{
for (int i=0;i<2;i++)
{
    percentage=cgpa=tgpa=otmarks=0;
	otmarks=(double)(std[i].marks[0]+std[i].marks[1]+std[i].marks[2]+std[i].marks[3]+std[i].marks[4]+std[i].marks[5]);
	percentage=(double)(otmarks/600)*100;
	tgpa=(std[i].gpa[0]+std[i].gpa[1]+std[i].gpa[2]+std[i].gpa[3]+std[i].gpa[4]+std[i].gpa[5]);
	cgpa=tgpa/6;
    printf("\n\t\t\t COMSATS UNIVERSITY ISLAMABAD,\n");
	printf("\t\t\t Abbottabad Campus \n");
	printf("Name:%s \t\t\t\t\t\t Program:%s \n",std[i].name,std[i].program);
	printf("Registration:%s \t\t\t\t\t Semester:%d \n\n\n",std[i].reg,std[i].sem);
	printf("------------------------------------------------------------------------\n");
	printf("No: \tSubject:  \tTotal Marks: \tObtained Marks \tGPA: \tstatus:  \n");
	printf("1 \tComm Skills \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[0],std[i].gpa[0],std[i].stat[0]);
	printf("2 \tGenetics \t   100  \t\t %d \t %0.2f \t %c  \n\n",std[i].marks[1],std[i].gpa[1],std[i].stat[1]);
	printf("3 \tCalculus \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[2],std[i].gpa[2],std[i].stat[2]);
	printf("4 \tPak Studies \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[3],std[i].gpa[3],std[i].stat[3]);
	printf("5 \tPPIT    \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[4],std[i].gpa[4],std[i].stat[4]);
	printf("6 \tPF       \t   100  \t\t %d \t %0.2f \t %c  \n", std[i].marks[5],std[i].gpa[5],std[i].stat[5]);
	printf("------------------------------------------------------------------------\n\n");
	printf("Percentage:%0.2f \t\tObtained Marks:%0.1f \tCGPA:%0.2f \n",percentage,otmarks,cgpa);
	printf("Checked by: Head Of Department \n");
}
}

if(select==2)
{
	printf("Enter roll number of student (Number Only)\n");
	scanf("%d",&no);
	no=no-1;
	 percentage=cgpa=tgpa=otmarks=0;
	otmarks=(double)(std[no].marks[0]+std[no].marks[1]+std[no].marks[2]+std[no].marks[3]+std[no].marks[4]+std[no].marks[5]);
	percentage=(double)(otmarks/600)*100;
	tgpa=(std[no].gpa[0]+std[no].gpa[1]+std[no].gpa[2]+std[no].gpa[3]+std[no].gpa[4]+std[no].gpa[5]);
	cgpa=tgpa/6;
    printf("\n\t\t\t COMSATS UNIVERSITY ISLAMABAD,\n");
	printf("\t\t\t Abbottabad Campus \n");
	printf("Name:%s \t\t\t\t\t\t Program:%s \n",std[no].name,std[no].program);
	printf("Registration:%s \t\t\t\t\t Semester:%d \n\n\n",std[no].reg,std[no].sem);
	printf("------------------------------------------------------------------------\n");
	printf("No: \tSubject:  \tTotal Marks: \tObtained Marks \tGPA: \tstatus:  \n");
	printf("1 \tComm Skills \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[no].marks[0],std[no].gpa[0],std[no].stat[0]);
	printf("2 \tGenetics \t   100  \t\t %d \t %0.2f \t %c  \n\n",std[no].marks[1],std[no].gpa[1],std[no].stat[1]);
	printf("3 \tCalculus \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[no].marks[2],std[no].gpa[2],std[no].stat[2]);
	printf("4 \tPak Studies \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[no].marks[3],std[no].gpa[3],std[no].stat[3]);
	printf("5 \tPPIT    \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[no].marks[4],std[no].gpa[4],std[no].stat[4]);
	printf("6 \tPF       \t   100  \t\t %d \t %0.2f \t %c  \n", std[no].marks[5],std[no].gpa[5],std[no].stat[5]);
	printf("------------------------------------------------------------------------\n\n");
	printf("Percentage:%0.2f \t\tObtained Marks:%0.1f \tCGPA:%0.2f \n",percentage,otmarks,cgpa);
	printf("Checked by: Head Of Department \n");
	
}
printf("\nPress '1' to go back to menu, '2' to exit program \n");
scanf("%d",&choice);
}
while(choice==1);


return 0;
}