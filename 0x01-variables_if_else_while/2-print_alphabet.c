#include <stdio.h>
#include <ctype.h>

/**
 * main - write a function that print the alphabets in lowercase
 * you can only use putchar
 * Return: 0
  */
int main(void)
{

int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;

}
putchar('\n');

return (0);

}
