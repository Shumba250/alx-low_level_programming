#include "main.h"
/**
* print_alphabet_10x -Print lowercase 10x
*
*Return: Always 0 (sucess)
*/
void print_alphabet_x10(void)
{
char letter;

int i;


for (i = 0; i < 10; i++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
}
