#include <stdio.h>
/**
* main -prints the alphabet in lowercase, and then in uppercase, followed by a new line
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}