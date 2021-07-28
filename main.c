/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i));   
    }

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(ptr + i));
    }

    return 0;
}
