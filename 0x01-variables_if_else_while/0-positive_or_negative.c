#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
<<<<<<< HEAD
printf(%d is positiven, n);
}
else if (n < 0)
{
printf(%d is negativen, n);
}
else
{
printf(%d is zeron, n);
=======
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
>>>>>>> 35b296bab40cd62018f18b9950bcc1b27e40e60a
}
return (0);
}
Footer
