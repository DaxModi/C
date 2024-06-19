#include <stdio.h>
#include <string.h> // string methods library

int main(int argc, char const *argv[])
{
    char c[]= {'a','b', 'c','\0'};
    puts(c);
    printf("check of new line after puts.\n");

    char s[] = {'x','b','c'};
    printf("%s\n",s); // if \0 is not added it adds reandom letters.

    char sentence[55];
    printf("Enter a sentence.\n");
    gets(sentence);
    printf("%s",  sentence);
    
    char line[100];
    printf("Enter a sentence.\n");
    scanf("%[^\n]",line); // [^\n] will read until \n is found.
    printf("%s\n",line);

    char nam[] ="luv"; // \0 id added automaatically

    //methods 
    printf("string lendth %d \n",strlen(nam));

    char a[50], b[]="copy";
    strcpy(a,b);//copies b to a.
    strcat(a,b);//concatinates a to b.
    printf("%d ", strcmp(a,b)); // ascii difference of a and b (a-b)
    char * g = strchr(b,'p'); // returns pointer of the first time character occured.

    char s1[] = "daxil luv meet", s2[] = "luv";
    char *re = strstr(s1,s2);
    printf("%s ",re); // if the s2 is found in s1, this function returns a pointer to the first character of the s2 in s1,

    strcpy(b,"ASa");
    strlwr(b);
    printf("%s ",b);
    strupr(b);
    printf("%s ",b);


    strncpy(sentence, "asdflkdsfj", 5); // coopies 5 element of the string.
    printf("%s ",sentence);

    strncat(sentence,"whole cannot ",5); // concatinates 5 elements of second string
    printf("%s ",sentence);

    printf("%d ",strcmpi("ABC","abc")); // compares ignoring case
    
    return 0;
}
