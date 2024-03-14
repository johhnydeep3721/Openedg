#include <stdio.h>

int main(void)
{
	float notExactFive = 5.4;
	float notExactNumber = 6.7;
	int exactFive;
	int roundedNumber;
	if (notExactNumber - notExactFive > 0.5)
	{
	    exactFive = (int)notExactFive - 1;
	}
	else
	{
		roundedNumber = (int)notExactNumber;
	}
	exactFive = (int)notExactFive;
	roundedNumber = (int)notExactNumber + 1;
	printf("Five is: %d\n", exactFive);
	printf("Rounded to seven: %d\n", roundedNumber);
	return 0;
}