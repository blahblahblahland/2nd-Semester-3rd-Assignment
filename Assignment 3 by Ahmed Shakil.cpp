#include<stdio.h>
#include<string.h>

struct dmca
{
	char name[36];
	char reg[36];
	char program[36];
	int sem;
	int marks[6];
};

int main()
{   
   
	char subject[6][20]={"Communication","Genetics","Calculus","Pak Studies","PPIT","Programming"};
	int totalmarks=100;
	struct dmca std[36];
	double gpa[6],percentage,cgpa,tgpa;
	char stat[6];
	double otmarks;
	for(int i=0;i<1;i++)
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
			printf("Enter obtained marks in %s: ",subject[j]);
			scanf("%d ",&std[i].marks[j]);
			if(std[i].marks[j]>=85)
			gpa[j]=4.00;
			else if(std[i].marks[j]>=80)
			gpa[j]=3.66;
			else if(std[i].marks[j]>=75)
			gpa[j]=3.33;
			else if(std[i].marks[j]>=70)
			gpa[j]=3.00;
			else if(std[i].marks[j]>=61)
			gpa[j]=2;
			else 
			gpa[j]=0;
			if(gpa[j]>=2)
			stat[j]='P';
			else
			stat[j]='F';
			getchar(); 
	}
	}
	

for (int i=0;i<1;i++)
{
    percentage=cgpa=tgpa=otmarks=0;
	otmarks=(double)(std[i].marks[0]+std[i].marks[1]+std[i].marks[2]+std[i].marks[3]+std[i].marks[4]+std[i].marks[5]);
	percentage=(double)(otmarks/600)*100;
	tgpa=(gpa[0]+gpa[1]+gpa[2]+gpa[3]+gpa[4]+gpa[5]);
	cgpa=tgpa/6;
    printf("\n\t\t\t COMSATS UNIVERSITY ISLAMABAD,\n");
	printf("\t\t\t Abbottabad Campus \n");
	printf("Name:%s \t\t\t\t\t\t Program:%s \n",std[i].name,std[i].program);
	printf("Registration:%s \t\t\t\t\t Semester:%d \n\n\n",std[i].reg,std[i].sem);
	printf("------------------------------------------------------------------------\n");
	printf("No: \tSubject:  \tTotal Marks: \tObtained Marks \tGPA: \tstatus:  \n");
	printf("1 \tComm Skills \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[0],gpa[0],stat[0]);
	printf("2 \tGenetics \t   100  \t\t %d \t %0.2f \t %c  \n\n",std[i].marks[1],gpa[1],stat[1]);
	printf("3 \tCalculus \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[2],gpa[2],stat[2]);
	printf("4 \tPak Studies \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[3],gpa[3],stat[3]);
	printf("5 \tPPIT    \t   100  \t\t %d \t %0.2f \t %c  \n\n", std[i].marks[4],gpa[4],stat[4]);
	printf("6 \tPF       \t   100  \t\t %d \t %0.2f \t %c  \n", std[i].marks[5],gpa[5],stat[5]);
	printf("------------------------------------------------------------------------\n\n");
	printf("Percentage:%0.2f \t\tObtained Marks:%0.1f \tCGPA:%0.2f \n",percentage,otmarks,cgpa);
	printf("Checked by: Head Of Department \n");
}
return 0;
}