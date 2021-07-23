/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sum(int n)  {

   if(n!=0)

       return (n%10 + sum(n/10));

   else

       return 0;

}

int main()

{

   int n;

   printf("Enter a number - ");

   scanf("%d",&n);

   printf("Sum of the digits of %d is: %d",n,sum(n));

   return 0;

}


