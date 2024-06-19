#include <stdio.h>

int ret()
{
    return 33;
}

void stat()
{
    static int var= 45;
    // static int var; this statement will initialize it as 0
    // static int var= ret(); error because static members get initialized before running main 
    // and main is the first function to be executed 
    printf("The value of var id %d\n", var);
    var++;
}

int main(int argc, char const *argv[])
{
    stat();
    stat(); // static variavle is initialized once only 
    return 0;
}
