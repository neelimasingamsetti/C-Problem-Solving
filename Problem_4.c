/* Take an N-value as input from the user and print all numbers from 1 to N line-by-line *\

  #include<stdio.h>
int main()
{
    int n,i;
    printf("enter n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
    printf("%d\n",i);
        }
    return 0;
}

/*OUTPUT

enter n value: 5
1
2
3
4
5
*\
