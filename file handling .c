#include<stdio.h>
int main(){
FILE* fptr;
char str[100];
fptr=fopen("test.txt", "w");
fprintf(fptr,"file handling in c");
fclose(fptr);
fptr=fopen("test txt", "r");
while(fgets(str, 100, fptr)!=NULL)
printf("%s",str);
fclose(fptr);
return 0;
}