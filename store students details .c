#include<stdio.h>
struct student{
char name[50];
float marks;
int age;
};
int main(){
struct student s;
int n;
printf("enter number of students");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("enter name marks and age:");
scanf("%s %f %d",s.name,&s.marks,&s.age);}
{printf("student details:\n name:%s\nmarks:%f\nage:%d\n",s.name,s.marks,s.age);}
return 0;}