#include <stdio.h>

main(a program that prints the alphabet)

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
