#include <stdio.h>

/**
 * main - Entry point
 * The program prompts for the user input
 * Return: Always 0 (success)
 */

int main(void)
{
	char name[5];

	printf("enter your name :");
	scanf("%s", name);
	printf("your name is %s", name);

	return (0);
}
