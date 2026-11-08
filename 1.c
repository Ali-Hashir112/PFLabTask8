#include <stdio.h>

int main()
{
	int age = 20;
	int *p = &age;
	
	printf("%d %d" , age , *p);
	
	*p = 21;
	
	printf("\n%d" , age);
}