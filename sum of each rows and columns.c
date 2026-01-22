#include<stdio.h>
int main(){
int a[10][10];
int r,j,i,c;
int rowsum,colsum;
printf("enter rows and columns:");
scanf("%d %d",&r,&c);
printf("enter elements of rows and columns:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d\n",&a[i][j]);}
}
printf("sum of each rows");
for(i=0;i<r;i++){
rowsum=0;
for(j=0;j<c;j++){
rowsum+=a[i][j];}
printf("Row %d=%d",i+1,rowsum);}
printf("sum of each columns");
for(j=0;j<c;j++){
colsum=0;
for(j=0;j<c;j++)
{colsum+=a[i][j];}
printf("column %d=%d",j+1,colsum);}
return 0;
}