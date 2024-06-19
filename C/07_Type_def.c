#include <stdio.h>

// typedef is used tp give nickname
typedef unsigned long ul;
ul l1, l2;

typedef struct Student
{
    int marks;
    char name[12];
} str;
str s2;

int main(int argc, char const *argv[])
{
    int* a,b; // a is a pointer and b is a variable
    typedef int* intpointer; // to solve above problem use this
    
    return 0;
}
