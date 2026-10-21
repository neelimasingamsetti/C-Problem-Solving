#include <stdio.h>
int main()
{
    int n,sum=0;
    float average;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
                 sum+=arr[i];
        }
    average=(float)sum/n;
    printf("sum = %d\n", sum);
    printf("average=%.2f\n", average);

    return 0;
    
}

OUTPUT
Enter the number of elements4
2
3
4
1
sum = 10
average=2.50
