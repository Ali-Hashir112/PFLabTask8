#include <stdio.h>

int main()
{
	int array[] = {4 , 9 , 2 , 7 , 5};
	int largest = 0;
	int sum = 0;
	
	int *p = &array;
	for(int i = 0 ; i < 5 ; i++)
	{
		if(*p > largest)
		{
			largest = *p;
		}
		sum += *p;
		p += 1;
	}
	
	printf("%d %d" , largest , sum);
}