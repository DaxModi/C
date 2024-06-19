#include <stdio.h>
#include <stdlib.h>

int* sum(int a, int b)
{
    int sum = a+b;
    return &sum;
}

int main(int argc, char const *argv[])
{ 
    // case 1: deallocation of memory
    int *ptr = (int*) malloc(3*sizeof(int));
    free(ptr); // now ptr is a dangling pointer
    return 0;

    // case 2: function returning local variable address
    ptr = sum(3,4);

    // case 3: variable out of scope
    { // start of scope
        int a=5;
        ptr = &a;
    } // end of scope , just like function local variables are destroyed so ptr becomes dangling 



}
