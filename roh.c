
/*write c program for employee payroll system using structure formula fro calculating gross salary is gross salary = basic + ta + hrf ta= 23% of basic hra =30% of basic
enter name of employee employee id basic salary ta hra speerately and gross salary and post, if salary more than 1 lakh manager if 80 - 1 lakh sub manager if 60-80 then senior clerk below 60 junior clerk?*/


#include<stdio.h>
struct emp{
float id,bas,ta,hra,post,gross;
char name;
};
int main()
{
struct emp e;
for(int i=0;i<=5;i++)
{
printf("Enter Name of the employee: ");
scanf("%s",&e.name);
printf("\nEnter Employee ID: ");
scanf("%f",&e.id);
printf("\nEnter Employee's Basic Salary: ");
scanf("%f",&e.bas);
e.ta=(23*e.bas)/100;
e.hra=(30*e.bas)/100;
e.gross=e.ta+e.hra+e.bas;

if(e.gross>=100000)
{
printf("\nPost:Manager");
}
else if(e.gross>=80000)
{
printf("\nPost:Sub Manger");
}
else if(e.gross>=60000)
{
printf("Post:Senior Clerk");
}
else if(e.gross<60000)
{
printf("Post:Junior Clerk");
}
return 0;
}



