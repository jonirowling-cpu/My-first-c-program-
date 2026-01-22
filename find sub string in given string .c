#include <stdio.h>
int main(){
char str[100],sub[100];
int i,j,found;
printf("enter main string");
gets(str);
printf("enter sub string");
gets(sub);
for(i=0;str[i]!='\0';i++){
j=0;
while(str[j+i]=sub[j] && sub[j]!='\0'){
j++;
if(sub[j]=='\0')
found=1;
break;}}
if(found==0)
printf("sub string found at position %d",i+1);
else
printf("sub string not found");
return 0;}