#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[] = " :)\1\2\3\4\5\6\\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0n\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
