#include "stdio.h"
void TestSizeof()
{
	int* q;
	int p = 5 * sizeof (*q);
	printf("%d\n", p);

	int apple = sizeof (int)* p;
	printf("%d\n", apple);
}
void TestSpace()
{
	int x = 0, y = 0;
	int z = y++ + x;
	z = y++ + ++x;

	int *a = NULL, *b = NULL;
	int c = *a / *b;

}
void TestConversion()
{
	printf(" %d \n", sizeof 'A');
	int a = sizeof 'A';
	printf(" a = %d \n", a);
}


/*                        K&R C                  */
int foo();
int foo(a, b)
int a;
int b;
{
	return a + b;
}