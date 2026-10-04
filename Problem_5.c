/* Take a number $N$ as input from the user and print its 10th multiplication table.*\

  #include<stdio.h>
int main()
{
int n,i;
    printf("enter a number");
    scanf("%d",&n);
    printf("\n multiplication table of %d:\n",n);
    
    for(i=1;i<=10;i++)
        {
            printf("%d * %d =%d\n",n,i,n*i);
        }
            return 0;
        }


/*OUTPUT
enter a number4

 multiplication table of 4:
4 * 1 =4
4 * 2 =8
4 * 3 =12
4 * 4 =16
4 * 5 =20
4 * 6 =24
4 * 7 =28
4 * 8 =32
4 * 9 =36
4 * 10 =40
*\
