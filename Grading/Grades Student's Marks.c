#include<stdio.h>
int main()
{
float mark1, mark2, mark3, mark4, mark5, sum, average;
char grade;
printf("Enter marks for Five subjects: \n");
scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);
sum=mark1 + mark2 + mark3 + mark4 + mark5;
average=sum/5;
if(average>=80)
{
 grade='A';
}
else if(average>=70)
{
grade='B';
}
else if(average>=60)
{
grade='C';
}
else if(average>=40)
{
grade='D';
}
else
{
grade='E';
}
printf("Average marks: %.2f\n", average);
printf("Grade: %c\n", grade);
return 0;
}
