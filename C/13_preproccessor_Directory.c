// process of running
// preprocessing > compilation > assembly > linking
// every preprocessor command starts with a #
 #include <stdio.h>
 #include "sample.c"
 #define SQUARE(s) s*s // this is a macro , like function but faster
 #define  OKAY 10;

 int main(int argc, char const *argv[])
 {
    func();
    printf("the area of square of size 5 is %d\n", SQUARE(5));
    printf("the area of square of size 5.3 is %f\n", SQUARE(5.3));

    // predefined macros
    printf("file name is %s\n", __FILE__);
    printf("date name is %s\n", __DATE__);
    printf("time is %s\n", __TIME__);
    printf("line number is %d\n", __LINE__);

    
    #ifdef OKAY
        int a=OKAY;
        printf("The constant value is %d \n", a);
    #else
        int a=100;
        printf("The constant value is %d \n", a);
    #endif
    
    #ifndef NOTOK
        #define NOTOK 200;
    #endif
    int b = NOTOK;
    printf("The constant value is %d \n", b);


    return 0;
 }
 