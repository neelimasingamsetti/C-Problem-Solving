/* Take 2 numbers as input from the user and find which number is larger (Maximum).*\

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter a number");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
        {
            printf("%d is the maximum number.\n",n1);
        }
            else if(n2>n1)
    {
    printf("%d is the maximum number.\n",n2);
    }
    else 
    {
     printf("Both are equal numbers.\n");   
    }

        return 0;
}

/* OUTPUT

Enter a number45
65
65 is the maximum number.
*\
