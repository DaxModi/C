#include<stdio.h>
int main()
{
    int x;
    if(x=0)
        printf("x is %d\n",x);
    else if(x= -5)
        printf("x is %d\n",x);


    x = 7;
    float y = 7.0;
    if(x==y)
        printf("True.\n");
        else 
        printf("False.\n");

    int b[] = {1,2,3};
    printf("%d\n", 0[b]); // b+0 = 0+b
    
    x = printf("hello\n");
    printf("%d\n",x);

    x = printf("hello");
    printf("%d\n",x);    

    if(x==5);
    else printf("else\n");

    switch(x)
    {
        default:
            printf("default.\n");
        case 1:
            printf("1\n");
        case 7:
            printf("7\n");
        case 2:
            printf("2\n");
    }
    
    switch(x)
    {
        case 1:
            printf("1\n");
        case 7:
            printf("7\n");
        case 2:
            printf("2\n");
        default:
            printf("default.\n");
    }

    x=7;
    switch(x)
    {
        default:
            printf("default.\n");
        case 1:
            printf("1\n");
        case 7:
            printf("7\n");
        case 2:
            printf("2\n");
    }


    int c[] = {1,2,3,4};
    printf("%u %u %u\n",c+1,&c, &c +1); // &c + 1 = &c + sizeof(c)
    
    // int a[][2] = {1,2,3,4,5,6,7}; // equivalent to {{1,2}, {3.4}, {5,6}, {7.0}};
	int a[4][2]={2,3,5,6,7,8,1,0};
	printf("The base address of 2D array is a=%p \n",a);
	printf("The address of 2nd row is a+1=%p \n",a+1);
	printf("The address of 1st row is *a=%p \n",*a);
	printf("The address of 2nd row *(a+1)=%p \n",*(a+1));

	printf("The value at a[0][1]=%d \n",*(*a+1));
	printf("The value at a[0][1]=%d \n",*(*(a+0)+1));
	printf("The value at a[1][0]=%d \n",*(*a+2));
	printf("The value at a[1][0]=%d \n",*(*(a+1)+0));

    return 0;
}