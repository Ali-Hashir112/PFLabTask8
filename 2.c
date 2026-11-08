#include <stdio.h>

void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 8;
	int y = 3;
	
	printf("%d %d" , x , y);
	
	swap(&x , &y);
	
	printf("\n%d %d" , x , y);
	
}