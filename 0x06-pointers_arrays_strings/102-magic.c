#include <stdio.h>
#include "main.h"

/**
 * Description: prints 1 line of code
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your line of code here
 * Remember:
 * - you are not allowed to use a
 * - you are not alloed to modify p
 * - only 1 statement
 * - you are not allowed to code anything else than this line of code
 */

*(p + 5) = 98;
/* so that it prints 98/n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
