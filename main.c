/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

#include<conio.h>

int lcm(int a , int b)

{

static int m = 0;

m = m + b;

if(m % a == 0 && m % b == 0)

{

 return m;

}

return lcm(a , b);

}

int main()

{

int x , y;

printf("Enter First Number : ");

scanf("%d" , &x);

printf("Enter Seconf Number : ");

scanf("%d" , &y);

printf("LCM of %d and %d = %d" , x , y , lcm(x , y));

return 0;

}
