/* Write a C program that takes three integers as input from the user and determines which one is the largest.*\

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%d is the largest number is.", a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d is the largest number is.", b);
    }
    else {
        printf("%d is the largest number is.",c);
        }
    return 0;
}

/* OUTPUT

Enter three numbers357
789
999
999 is the largest number is
*\
