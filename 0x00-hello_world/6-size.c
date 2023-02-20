#include <stdio.h>

/**
 * main - return 0
 * description - print out the size of each datatype
 * return 0
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)", sizeof(unsigned long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
