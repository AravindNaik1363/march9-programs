#include<stdio.h>
#define MAXSIZE 10//macro 
int i,l;
void search(const int ,const int *,const int);
int main()
{
   int n,m;
   printf("enter the size of array:");
   scanf("%d",&n);
   int a[MAXSIZE];
   printf("enter the elements:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the element to be searched:");
   scanf("%d",&m);
   void (*fp)(const int ,const int *,const int);
   fp=search;
   fp(n,a,m);
   return 0;
}
void search(const int n,const int *a,const int m){
   for(i=0;i<n;i++)
   {
      if(m==a[i]){
         l=1;
         break;
      }
   }
   if(l==1)
   {
      printf("%d is present in the array",m);
   } 
   else 
   {
      printf("%d is not present in the array",m);
   }
}
