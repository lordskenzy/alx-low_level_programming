#include "stdio.h"

/**
 * this print_to_98 - prints all num from n 98
 *  print_to_98 - prints all natural numbers from n to 98
 * this too
 *  @n: value to start printing from
 * all this
 */

	void print_to_98(int n)

{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
