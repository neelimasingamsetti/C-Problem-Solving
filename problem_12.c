#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    
    printf("Enter temperature in celsius");
    scanf("%f", &fahrenheit);
    fahrenheit = (celsius * 9.0/5.0) + 32;
    printf("Temperature in fahrenheit: %2f F\n", fahrenheit);
    return 0;
    
}


OUTPUT

Enter temperature in celsius35
Temperature in fahrenheit: 32.000000 F
