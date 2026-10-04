/*Write a C program to take an integer input from the user and print the message: 'The number you entered is: [number]'."

#include<stdio.h>
int main()
{
int n;
printf("Enter a number");
scanf("%d", &n);
printf("The number you entered is: %d\n",n);
return 0;
}

/* OUTPUT*/

Enter a number8
The number you entered is: 8
