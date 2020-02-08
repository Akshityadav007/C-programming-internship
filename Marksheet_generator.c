#include<stdio.h>
#include<string.h>
int main()
 {
	int rl,s1,s2,s3,s4,s5,t;
	float per;
	char nm[25],div[10];
	printf("Enter the Roll No : ");
	scanf("%d",&rl);
	printf("Enter Name: ");
fflush(stdin);
	gets(nm);
	printf("Enter MATHEMATICS marks:");
	scanf("%d",&s1);
	printf("Enter PHYSICS marks:");
	scanf("%d",&s2);
	printf("Enter CHEMISTRY marks:");
	scanf("%d",&s3);
	printf("Enter ENGLISH marks: ");
	scanf("%d",&s4);
	printf("Enter INFORMATION PRACTICES marks:");
	scanf("%d",&s5);
	t=s1+s2+s3+s4+s5;
	per=t/5.0;
		if(per>=75)
	     strcpy(div,"Honour");
	      else if( per>=60)
		  strcpy(div,"First");
		   else if( per>=48)
			 strcpy(div,"Second");
			  else if (per>=36)
			     strcpy(div,"Pass");
			     else
			     strcpy(div,"Fail");
printf("******************************************************************************************************************\n");
printf("**\t\t\t\tCENTRAL BOARD OF SECONDARY EDUCATION,NEW DELHI\t\t\t\t\t\t**\n");
printf("**\t\t\t\t\t\tMARKS STATEMENT\t\t\t\t\t\t\t\t**\n");
printf("**\t\t\t\tALL INDIA SENIOR SCHOOL CERTIFICATE EXAMINATION,2019\t\t\t\t\t**\n");
    printf("**\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\n");
	printf("**\t\t\tRoll No: %d \t  Name : %s\t\t\t\t\t\t\t**\n",rl,nm);
	printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
	printf("**\t\t\tSubject                   Max      Passing Marks             Obt.Marks\t\t\t\t**\n");
	printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
	printf("**\t\t\tMATHEMATICS               100        36                        %d\t\t\t\t**\n",s1);
    printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
	printf("**\t\t\tPHYSICS                   100        36                        %d\t\t\t\t**\n",s2);
    printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
	printf("**\t\t\tCHEMISTRY                 100        36                        %d\t\t\t\t**\n",s3);
    printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
	printf("**\t\t\tENGLISH                   100        36                        %d\t\t\t\t**\n",s4);
    printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
    printf("**\t\t\tINFORMATION PRACTICES     100        36                        %d\t\t\t\t**\n",s5);
    printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
	printf("**\t\t\t\t\t\tTOTAL       %d\t\t\t\t\t\t\t\t**\n",t);
	printf("**\t\t\t\t\t\tper  %f\t\t div: %s\t\t\t\t\t**\n",per,div);
    printf("**\t\t\t---------------------------------------------------------------------\t\t\t\t**\n");
		printf("**\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\n");
    printf("******************************************************************************************************************");
}
