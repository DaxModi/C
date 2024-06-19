#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=66;
    int *ptr = &a;
    printf("the value of a is %d\n", a);
    printf("the value of a is %d\n", *ptr);
    printf("the address of a is %p\n", &a);
    printf("the address of ptr is %p\n", ptr);
    printf("the address of a is %p\n", &ptr); // %x = hexadecimal and %p= pointer

    printf("%d\n",ptr);
    printf("%d\n",ptr+1); // adds the size of the data type
    printf("%d\n",++ptr);

    // void pointer 
    float b= 5.5;
    void *pt;

    a=12;
    pt = &a;
    printf("a is %d\n", *(int*)pt);

    
    pt = &b;
    printf("b is %f\n", *(float*)pt);

    // null pointer
    int *p= NULL; // null pointer cannot be dereferenced else program will crash

    if(p!=NULL) // so it should be preferred
        printf("%d", *p);

        // wild pointer
        int *a; // uninitialized pointer is a wild pointer , dereferencing it can crash
    
    return 0;
}
