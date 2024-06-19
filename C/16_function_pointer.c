#include <stdio.h>
#include <math.h>

int sum(int a, int b)
{
    return a+b;
}

void call(int (*ptr) (int, int)) // call backk function , thid helps to use different function in a function
{
    printf("the square root is %f\n", sqrt(ptr(5,2)));
}

int main(int argc, char const *argv[])
{
    int (*ptr) (int, int); // declaring a function pointer
    ptr = &sum; // defining the pointer
    int a= (*ptr) (5,6); // dereferencing a function pointer
    printf("the sum is %d\n", a);
    call(ptr);
    return 0;
}
