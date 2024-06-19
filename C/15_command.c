#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("the value of argv at index %d is %s\n",i,argv[i]);
    }


    char nu[]= "12";
    int a = atoi(nu);
    char c= '5';
    int b = atoi(&c); // not correct because \0 is not there

    printf("the value of a is %d and of b is %d",a,b);
    return 0;
}
