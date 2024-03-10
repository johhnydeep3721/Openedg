#include <stdio.h>

int main()
{
	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	
	int counterLetter =  lastLetter - firstLetter + 1;
	int counterSmallLetter = lastSmallLetter - firstSmallLetter + 1;
	
	
	printf("Upper case letters beetween (and with) '%c' and '%c' is : %d\n", 
		 lastLetter, firstLetter, counterLetter);
	printf("Lower case letters beetween (and with) '%c' and '%c' is : %d\n", 
		lastSmallLetter, firstSmallLetter, counterSmallLetter);
	return 0;
}