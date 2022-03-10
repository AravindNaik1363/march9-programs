#include <stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);
void modulo(int,int);
void logicaland(int,int);
void logicalor(int,int);
void assignment(int,int);
void leftshift(int,int);
void rightshift(int,int);
int main()
{
    int a=100,b=10;
    void (*f[10])(int,int)={add,sub,mul,divi,modulo,logicaland,logicalor,assignment,leftshift,rightshift};
    f[0](a,b);
    f[1](a,b);
    f[2](a,b);
    f[3](a,b);
    f[4](a,b);
    f[5](a,b);
    f[6](a,b);
    f[7](a,b);
    f[8](a,b);
    f[9](a,b);
    return 0;
}
void add(int a,int b)
{
    printf("add=%d\n",a+b);
    return;
}
void sub(int a,int b)
{
    printf("sub=%d\n",a-b);
    return;
}
void mul(int a,int b)
{
    printf("mul=%d\n",a*b);
    return;
}
void divi(int a,int b)
{
    printf("divi=%d\n",a/b);
    return;
}
void modulo(int a,int b)
{
    printf("modulo=%d\n",a%b);
    return;
}
void logicaland(int a,int b)
{
    printf("logical And=%d\n",a&&b);
    return;
}
void logicalor(int a,int b)
{
    printf("logical Or=%d\n",a||b);
    return;
}
void assignment(int a,int b)
{
    printf("assignment=%d\n",a+=b);
    return;
}
void leftshift(int a,int b)
{
    printf("leftshift=%d\n",a<<b);
    return;
}
void rightshift(int a,int b)
{
    printf("rightshift=%d\n",a>>b);
    return;
}
