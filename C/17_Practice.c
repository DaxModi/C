#include<stdio.h>

int main()
{
	int a=-2;
	int b=2;
	int c=0;
//	int d= ++a||++b&&++c; is equivalent to ++a||(++b&&++c) since ++a is true further execution will not happen and 1 is returned
int d=++a&&++b||++c;
	printf("%d %d %d %d\n",a,b,c,d);

    a=50;
    b=45;
    printf("~a = %d\n", a = ~a); // bitwise not
    printf("a&b = %d\n",a&b); // bitwise and
    printf("a|b = %d\n",a|b); // bitwise or
    printf("a^b = %d\n",a^b); // bitwise xor
    printf("before left shift = %d a<<1 = %d after left shift = %d\n",a,a<<1,a); // left shift , on shifting by 1 value doubles, 
    printf("a<<3 = %d\n",a<<3);
    
    printf("a>>1 = %d\n",a>>1);// right shift, divides by 2 and prints the quotient
    printf("b>>1 = %d\n",b>>1);


    a=50;
    printf("%d %u",~a,~a); // for signed int ~a = -a - 1

	return 0;
}