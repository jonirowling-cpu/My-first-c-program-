#include<stdio.h>
struct employee{
char name[50];
float basic,hra,da,gross;
int age;
};
int main(){
struct employee e;
int n;
printf("enter number of employees");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("enter name basic and age:");
scanf("%s %f %d",e.name,&e.basic,&e.age);}{
e.da=0.40*e.basic;
e.hra=0.20*e.basic;
e.gross=e.basic+e.da+e.hra;}
{printf("student details:\n name:%s\nage:%d\nbasic:%f\nda:%f\nhra:%f\ngross:%f\n",e.name,e.age,e.basic,e.da,e.hra,e.gross);}
return 0;}