#include <stdio.h>

int main()
{
	char zero = '0';
	
	char one = '1';

    char two = '2';
    
    char three = '3';
    
    char four = '4';
    
    char five = '5';
    
    char six = '6';
    
    char seven = '7';
    
    char eight = '8';
    
    char nice = '9';
    
    int counter1 = one - zero;
    int counter2 = two - zero;
    int counter3 = three - zero;
    int counter4 = four - zero;
    int counter5 = five - zero;
    int counter6 = six - zero;
    int counter7 = seven - zero;
    int counter8 = eight - zero;
    int counter9 = nice - zero;
    int counter0 = zero - zero;
    
	/*Your code*/
	
	printf("'%c' - '%c' is: %d", one, zero, counter1);
	printf("\n'%c' - '%c' is: %d", two, zero, counter2);
	printf("\n'%c' - '%c' is: %d", three, zero, counter3);
	printf("\n'%c' - '%c' is: %d", four, zero, counter4);
	printf("\n'%c' - '%c' is: %d", five, zero, counter5);
	printf("\n'%c' - '%c' is: %d", six, zero, counter6);
	printf("\n'%c' - '%c' is: %d", seven, zero, counter7);
	printf("\n'%c' - '%c' is: %d", eight, zero, counter8);
    printf("\n'%c' - '%c' is: %d", nice, zero, counter9);
	printf("\n'%c' - '%c' is: %d", zero, zero, counter0);
	
	
	return 0;

}