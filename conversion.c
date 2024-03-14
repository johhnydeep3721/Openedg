#include <stdio.h>

int main()
{
	/* your code */
	float number;
	printf("input number: ");
	scanf("%f", &number);
	
	int number_int = (int)number;
	
	if(number_int >= 1 && number_int < 2)
    {
        printf("Very bad");
    }
	else if(number_int >= 2 && number_int < 3)
	{
	    printf("Bad");
	}
	else if(number_int >= 3 && number_int < 4)
	{
	    printf("Neutral");
	
	}
	else if(number_int >= 4 && number_int < 5)
	{
	    printf("Good");
	}
	else if(number_int >= 5 && number_int < 6)
	{
	    printf("Very Good");
	}
	return 0;

}