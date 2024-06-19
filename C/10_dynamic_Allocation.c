#include <stdio.h>
#include <stdlib.h>

// size ./a.exe tells the memory allocated to diffferent segments

int main(int argc, char const *argv[])
{
    // dymamic memory allocation
    int *ptr = (int*) malloc(10*sizeof(int)); // array of size 10 with initial garbage value 
    int *p = (int*) calloc(10, sizeof(int)); // same as malloc just initial value is 9

printf("Enter first element\n");
scanf("%d", &ptr[0]);

printf("first element is %d\n", ptr[0]);
ptr = (int*) realloc(ptr, 5*sizeof(int)); // reallocates memory pointed by ptr dynamically

printf("Enter first element\n");
scanf("%d", &ptr[0]);
printf("first element is %d\n", ptr[0]);

free(ptr); // free up the memory of heap pointed by ptr


    return 0;
}
