#include <stdio.h>
#include "18.1_Storage_classes.c"
int main()
{
    // Auto Stroage class -> It is the default storage class for all local variable
    auto int a = 5;
    printf("%d\n", a);

    // Register Stroage class -> Assign the memory in Register insted of ram
    register int r=56;
    printf("%d\n", r);

    // Static Storage class -> initialized only once , Default value is zero-
    for (int i = 1; i < 4; i++)
    {
        static int s;
        printf("%d\n", s);
        s++;
    }

    // Extern Storage Class -> It refers to the global variable
    extern int e;
    printf("%d\n", e);
    return 0;
}

// Global variable by Extern Storage class
// int e = 5;