#include <stdio.h>

/**
	* 2-print_alphbet.c - prints "abcdefghijklmnopqrstuvwxyz"
	*/

int main(void)
{
	/*declare a variable*/
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
	/*print the value of the variable*/
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
