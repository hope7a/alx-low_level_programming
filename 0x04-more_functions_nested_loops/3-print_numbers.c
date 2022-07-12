#include "main.h"

/**
* print_most_numbers - prints 0 to 9 except 2 and 4
*
* Return: 0-9, except 2 and 4
*/
void print_numbers(void)
{
int number = 48;
for (number = 48; number < 58; number++)
{
_putchar(number);
}
_putchar(10);
}
