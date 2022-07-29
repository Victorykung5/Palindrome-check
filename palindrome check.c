#include<stdio.h>
#include <string.h>
int main() {
 char str1[9999],strr[9999];
 int a,b,c;
printf("Enter your string to check if it is a palindrome :");
scanf("%s",str1);
strcpy(strr,str1);
strrev(strr);
a=strcmp(str1,strr);
 if(a==0)
    printf("YES, This is Palindrome");
  else
    printf("NO, This is not a Palindrome");
 return 0;
}