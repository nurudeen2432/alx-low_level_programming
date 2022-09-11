#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that prints alphabet in lowercase
 * uppercase, followed by a newline
 * you can use the putchar function three times
 * Return: 0
 */
int main(void)
{
int l = 'a';
int L = 'A';

while (l <= 'z')
{
putchar(l);
l += 1;
}
while (L <= 'Z')
{
putchar(L);
L += 1;
}
putchar('\n');
return (0);
} 
