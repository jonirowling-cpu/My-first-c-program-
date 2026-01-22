#include<stdio.h>
int main(){
char str[50][10],temp[50];
int i,n,j;
printf("enter number of string:");
scanf("%d",&n);
printf("enter string:");
for(i=0;i<n;i++){
scanf("%s",str[i]);}
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(strcmp(str[i],str[j])>0)
{ 
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);}
}
}
printf("acended string\n");
for(i=0;i<n;i++)
printf("%s\n",str[i]);
return 0;
}