#include <stdio.h>
/**
*main - Entry point
*This program displays numbers from 0 - 9 using the putchar function.
*Return: Always 0 (Success)
*/
int main(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
putchar(numbers);
}
putchar('\n');
return (0);
}
