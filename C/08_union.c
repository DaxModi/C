#include <stdio.h>
#include <string.h>

union Student // union shares memory
{
    int id;
    int num;
    char c;
    char name[4];
};

int main(int argc, char const *argv[])
{
    union Student s;
    strcpy(s.name, "luv");
    s.id =1;
    s.num=10;
    s.c='u';

    printf("id is %d\n", s.id);
    printf("num is %d\n", s.num);
    printf("c is %c\n", s.c);
    printf("name is %s\n", s.name);
    
    printf("\n");

    s.id =1;
    s.num=10;
    s.c='u';
    strcpy(s.name, "luv");

    printf("id is %d\n", s.id);
    printf("num is %d\n", s.num);
    printf("c is %c\n", s.c);
    printf("name is %s\n", s.name); 

    return 0;
}
