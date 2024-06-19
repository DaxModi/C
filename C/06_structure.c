#include <stdio.h>
#include <string.h>

//structure allocates continuous memory and each block of size of max element size.
struct Student // here 2 blocks of size 12 bytes  as maximum size of a element is 12
{
    int marks;
    char name[12];
}a, b;// another way

   // struct Student s1; global  

int main()
{
    struct Student s1; // local
    s1.marks = 100;
    strcpy(s1.name, "luv");

    //nested structure
    struct address
	{
		char phone[15];
		char city[25];
		int pin;
	};
	
	struct emp
	{
		char name[25];
		struct address A;
	};

    struct emp E1 = {"Anil","9998887776","Pune",411041};
    printf("\nName = %s, Phone No. = %s, City = %s, Pin Code = %d \n", E1.name, E1.A.phone, E1.A.city,E1.A.pin);

    //different structure assignment.
    struct employee
	{
		char name[20];
		int age;
		float salary;
	};

    struct employee LabStaff = {"Ravi", 30, 40000};
    struct employee Admin=LabStaff;
    printf("\n%s %d %f \n", Admin.name, Admin.age, Admin.salary);

    struct employee OfficeStaff = {0}; // initializes all values by 0.
    printf("%s %d %f \n", OfficeStaff.name, OfficeStaff.age, OfficeStaff.salary);

    return 0;
}
