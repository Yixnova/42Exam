#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		char op = argv[2][0];

		if (op == '+')
			printf("%d", num1 + num2);
		if (op == '-')
			printf("%d", num1 - num2);
		if (op == '*')
			printf("%d", num1 * num2);
		if (op == '/')
			printf("%d", num1 / num2);
		if (op == '%')
			printf("%d", num1 % num2);
		}
	printf("\n");
	return (0);
}
