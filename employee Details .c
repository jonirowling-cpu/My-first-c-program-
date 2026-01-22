#include<stdio.h>
struct employee{
char name[50];
float ID;
int age;
};
int main(){
struct employee e;
int n;
printf("enter number of employees");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("enter name ID and age:");
scanf("%s %f %d",e.name,&e.ID,&e.age);}
{printf("student details:\n name:%s\nID:%f\nage:%d\n",e.name,e.ID,e.age);}
return 0;}