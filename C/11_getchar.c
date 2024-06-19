#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int length;
    char *ptr, a,b;
    
    printf("enter the number of letters in your name\n");
    scanf("%d", &length);
    getchar(); // space ia also a character so to avoid it we use it

    printf("enter the value of a \n");
    scanf("%c", &a);
    getchar();
    
    printf("enter the value of b \n");
    scanf("%c", &b);
    getchar();

    printf("enter your  name\n");
    ptr = (char*) malloc((length+1)*sizeof(char)); // +1 becausw \0
    scanf("%s", ptr); // & not used because it is already a pointer

    printf("your name is %s", ptr);
    return 0;
}
