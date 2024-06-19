#include <stdio.h>

void fun(int *a, int *b) // a and b are formal arguments
{
    int temp = *a;
    *a= *b;
    *b=temp;
}

void fun1(int a, int b) // a and b are formal arguments
{
    int temp = a;
    a= b;
    b=temp;
}

void arr(int ar[]) // can use *ptr instead also
{
    ar[0]=5;
}

int main(int argc, char const *argv[])
{
    int x=6, y=8;
    printf("valur of a id %d and b is %d\n",x,y);
    fun(&x,&y); // call by reference , x and y are actual arguments
    printf("valur of a id %d and b is %d\n",x,y); 

    int a=5, b=4;
    printf("valur of a id %d and b is %d\n",a,b);
    fun1(x,y); // call by value , x and y are actual arguments
    printf("valur of a id %d and b is %d\n",a,b); 



    int v[] = {1,2,3,4,4};
    printf("first element is %d\n",v[0]);
    arr(v);
    printf("first element is %d\n",v[0]); 

    return 0;
}
