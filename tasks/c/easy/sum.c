// C - Easy

#include <stdio.h>

// TODO: Implement the sum function
int sum(int a, int b)
{
    int sum = a+b;
    printf("The sum is: %d", sum);
}

int main() {
    // TODO: Implement the main function
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a, &b);

    sum(a,b);
    
    return 0;
}
