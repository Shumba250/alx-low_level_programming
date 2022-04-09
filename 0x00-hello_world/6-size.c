#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("the size of interget is :%lu byte(s)\n",(unsigned long)sizeof(a));
	printf("the size of character is :%lu byte(s)\n",(unsigned long)sizeof(b));
	printf("the size of float is :%lu byte(s)\n",(unsigned long)sizeof(c));
	printf("the size of long int is :%lu byte(s)\n",(unsigned long)sizeof(d));
	printf("the size of long long int is:%lu byte(s)\n",(unsigned long)sizeof(e));
	return (0);
}
