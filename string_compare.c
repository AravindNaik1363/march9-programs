#include <stdio.h> 
#define size 20//macro
int compare(const char*,const char*); //using constant paramaters 
int main()  
{  
   char str1[size]; // declaration of char array  
   char str2[size]; // declaration of char array  
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2); 
   int (*fp)(const char*,const char*);//declaring function pointer
   fp=compare;//assigning address of compare to function pointer
   int c=fp(str1,str2);// calling compare() function  using function pointer
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}  
  
// Comparing both the strings.  
int compare(const char *c,const char *d)  
{  
    int flag=0;    
    while(*c!='\0' && *d!='\0')  // while loop  
    {  
       if(*c!=*d)  
       {  
           flag=1;  
       }  
       c++;
       d++;
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
