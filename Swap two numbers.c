#include<stdio.h>
int main()
{
	 int a, b;
	 printf("Enter value of A: ");
	 scanf("%d", &a);
	 printf("Enter value of B: ");
	 scanf("%d", &b);
	 printf("Before swapping: A = %d and B = %d\n", a, b);
	 a = a + b;
	 b = a - b;
	 a = a - b;
	 printf("After swapping: A = %d and B = %d", a, b);
	 return(0);
}
