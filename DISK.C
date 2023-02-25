#include<stdio.h>
#include<conio.h>
void main()
{
int ch,cn,age;
char m,n,na[50];
clrscr();
printf("\n                Welcome To");
printf("\n            Jayesh Dance Academy");
printf("\n        choreographer:- Jayesh Mahale");
printf("\n               Mob:-9664549041");
printf("\nAdd:-Plot 136,Karmayogi society-2,Pandesara,Surat.");
printf("\n----------------------------------------------------");
printf("\n          ***Select Dance Type***");
printf("\n               1.Hiphop Dance");
printf("\n               2.Zumba Dance");
printf("\n     Enter Sr.Number Which You Want To See:  ");
scanf("%d",&ch);
printf("\n----------------------------------------------------");
switch(ch)
{
case 1:
{
printf("\n         ***Course Details Of Hiphop***");
printf("\n      Hiphop Dance Is A Range Of Street Dance Styles");
printf("\n	 Primarily Performed To Hip hop music or that");
printf("\n	   evolvedas part of hiphop culture.");
printf("\n                 Fees:- 7000");
printf("\n             Duration:- 3 Months");
printf("\n----------------------------------------------------");
printf("\n   Do You Want To Take Addmission For Hiphop???");
printf("\n        If Yes Enter 'Y' or 'N' For No:  ");
scanf("%s",&m);
printf("\n----------------------------------------------------");
if(m=='Y')
{
printf("\n        ***Fill Registration Form***");
printf("\n           Enter Full Name:- ");
scanf("%s",&na);
printf("             Enter Your Age:- ");
scanf("%d",&age);
printf("            Enter Your Contact Number: ");
scanf("%d",&cn);
printf("            We will Connect You Soon!");
printf("\n       ***Thank You For Join With Us***");
printf("\n----------------------------------------------------");
}
else if(m=='N')
{
printf("\n         ***Thank For Contact Us***");
printf("\n----------------------------------------------------");
}
else
{
printf("\n         Please Enter Valid Sr.Number");
printf("\n----------------------------------------------------");
}
break;
}
case 2:
{
printf("\n           ***Course Details Of Zumba***");
printf("\n       Zumba Is A Fitness Program That Involves");
printf("\n             Cardio & Latin-Inspired Dance");
printf("\n                    Fees:- 5000");
printf("\n                Duration:- 3 Months");
printf("\n------------------------------------------------------");
printf("\n     Do You Want To Take Addmission For Zumba???");
printf("\n         If Yes Enter 'Y' or 'N' For No: ");
scanf("%s",&n);
printf("\n------------------------------------------------------");
if(n=='Y')
{
printf("\n         ***Fill Registration Form***");
printf("\n            Enter Full Name:- ");
scanf("%s",&na);
printf("              Enter Your Age:- ");
scanf("%d",&age);
printf("            Enter Your Contact Number:- ");
scanf("%d",&cn);
printf("\n           We will Connect You soon!");
printf("\n        ***Thank You For Join With Us***");
printf("\n------------------------------------------------------");
}
else if(n=='N')
{
printf("\n         ***Thank You For Contact Us***");
printf("\n------------------------------------------------------");
}
else
{
printf("\n           Please Enter Valid Answer");
printf("\n------------------------------------------------------");
}
break;
}
}
getch();
}