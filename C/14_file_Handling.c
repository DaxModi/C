#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr= NULL;
    char string[31];

    // reading a file
    ptr= fopen("file.txt","r");
    fscanf(ptr, "%s", string);
    printf("%s",string);

    char c;
    c=fgetc(ptr);
    printf("the character received is %c\n", c);
    c=fgetc(ptr);
    printf("the character received is %c\n", c);
    c=fgetc(ptr);
    printf("the character received is %c\n", c);

    char str[4];
    fgets(str,4,ptr);
    printf("the string received is %s\n", str);
    fgets(str,6,ptr);
    printf("the string received is %s\n", str);


    // appending a file
    ptr = fopen("file.txt", "a");
    char st[]= "\ni am adding text to the file through code";
    fprintf(ptr, "%s", st);
    fputc('\n', ptr);
    fputs("added a string", ptr);

    // writing is same as appending just existing text in the file vanishes

    /*
    a+ mode does both read and append
    w+ mode does write and read
    r+ mode reads and writes , it writes only the part editted
    */

   
    ptr = fopen("file.txt", "r+");
    fputs("not fully overrided", ptr);


    fclose(ptr); // closes the file and make it available for another to use

    return 0;
}
