#include <stdio.h>
/**
 * main -Entry point
 *
 * return: Always 0 (sucess)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;
	printf("the size of interget is :%lu bytes\n",(unsigned long)sizeof(a));
	printf("the size of character is :%lu bytes\n",(unsigned long)sizeof(b));
	printf("the size of float is :%lu bytes\n",(unsigned long)sizeof(c));
	printf("the size of long int is :%lu bytes\n",(unsigned long)sizeof(d));
	printf("the size of long long int is:%lu bytes\n",(unsigned long)sizeof(e));
}
