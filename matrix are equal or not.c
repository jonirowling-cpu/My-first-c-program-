#include<stdio.h>
int main(){
int a[2][2],b[2][2];
int i,j,same=1;
printf("enter first matrix elements:\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
printf("second matrix elements:\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);
for(i=0;i<2;i++)
for(j=0;j<2;j++)
if(a[i][j]!=b[i][j])
same=0;
 if(same)
 printf("matrix are equal");
 else
 printf("not equal");
return 0;}