#include <stdio.h>
/**
 * main - print out sizes  of data types of C
 * done by NerFLee
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
