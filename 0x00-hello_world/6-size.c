#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %e byte(s)\n", sizeof(long int));
	printf("size of a long long int: %f byte(s)\n", sizeof(long long int));
	printf("size of a float: %g byte(s)\n", sizeof(float));
	return(0);
}
