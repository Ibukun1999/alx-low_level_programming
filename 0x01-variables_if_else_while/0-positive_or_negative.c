#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
*/
int main(void)
{
	int n;

<<<<<<< HEAD
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
=======
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
>>>>>>> 46d732aaa3a27c5ef138290f3eb4c0c910601eb4
}
