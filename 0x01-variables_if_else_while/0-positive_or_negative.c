#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main  - assign a random number to the variable n each time it is executed
 *if the number is greater than 0: is positive.
 but if the number is less than zero is negative
 *if the number is zero 0; is zero
 *Return: 0
 */
int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);

}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);


}
