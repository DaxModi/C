#include <stdio.h>
#define PI 3.14159 // a way to define a constant 
int main()
{
    int a=5;
    float f= 53.4566;

    printf("%d\n",a);
    printf("%f\n",f);
    printf("%0.2f\n",f);
    printf("%1.5f\n",f);
    printf("%9.5f\n",f);
    printf("%-9.5f space\n\a",f);

    const int b=5;
    // b=6; this is ajerror
    
    return 0;
}