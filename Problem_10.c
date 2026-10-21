#include <stdio.h>
int main()
{
    int arr[5]={2,3,4,5,6};
    int max = arr[0];
    int min = arr[0];
    for( int i=1; i<=5; i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
                }
        }
        printf("Maximum Element: %d\n",max);
        printf("Minimum Element: %d\n", min);
    return 0;
}

OUTPUT
Maximum Element: 6
Minimum Element: 2
