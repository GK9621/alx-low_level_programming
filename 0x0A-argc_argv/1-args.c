#include <stdio.h>
/**
 * main - prints number of arguments passed
 *
 * @args: count argument
 * @argv: vector argument
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
