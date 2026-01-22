#include<stdio.h>
int main(){
int a[10][10];
int i,j,n;
int sum=0;
printf("enter size of square matrix:\n");
scanf("%d",&n);
printf("enter elements of matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++){
sum=sum+a[i][i];
}
printf("resulting addition:%d\n",sum);
return 0;}
    