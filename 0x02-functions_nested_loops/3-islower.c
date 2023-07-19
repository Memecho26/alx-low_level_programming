#include "main.h"
/**
*_islower - shows 1 if the input is a lowercase character, other cases shows 0
*
*@C: The character in ASCII code
*
*Return: 1 for lowercase characters, 0 for the rest
*/
int _islower(int c)
{
	for (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
