#include <stdio.h>


void calendar(int month){
    switch (month){
        case 1:
        printf("%d: January",month);
        break;
        case 2:
        printf("%d: February",month);
        break;
        case 3:
        printf("%d: March",month);
        break;
        case 4:
        printf("%d: April",month);
        break;
        case 5:
        printf("%d: May",month);
        break;
        case 6:
        printf("%d: June",month);
        break;
        case 7:
        printf("%d: July",month);
        break;
        case 8:
        printf("%d: August",month);
        break;
        case 9:
        printf("%d: September",month);
        break;
        case 10:
        printf("%d: October",month);
        break;
        case 11:
        printf("%d: November",month);
        break;
        case 12:
        printf("%d: December",month);
        break;
        default:
        printf("Error: no such month in my calendar.");
    }
    
}
int main()
{
    int month;
    printf("input months: ");
    scanf("%d",&month);
    calendar(month);
	/* your code */
	return 0;
}