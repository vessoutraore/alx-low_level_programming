/*
 * File: 3-print_alphabets.c
 * Author : TRAORE Youssouf vessou
 * Inclusion of STL 
 */

#include <stdio.h>

/**
 * main - Is a principal function that prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 if the code is correct.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
