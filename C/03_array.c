#include <stdio.h>
int main(int argc, char const *argv[])
{
    int b[5];
    int arr[] ={1,2,3,4,5};
    
    printf("%d\n",arr);
    printf("%d\n",&arr[0]);
    
    printf("address of second element %d\n",arr+1);
    printf("adress of second element %d\n",&arr[1]);


    return 0;
}
