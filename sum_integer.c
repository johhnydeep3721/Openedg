#include <stdio.h>

int main()
{
	/* your code */
	int num1, num2, num3, num4, sum;
	while(1){
	    
	    printf("input number: ");
	    scanf("%d",&num1);
	    printf("input number: ");
	    scanf("%d",&num2);
	    printf("input number: ");
	    scanf("%d",&num3);
	    printf("input number: ");
	    scanf("%d",&num4);
	    
	    sum = num1 + num2;
	    printf("Sum: %d",sum);
	    if(num4 == 0 && num3 == 99){
	        printf("\nSum: %d",num3);
	        printf("\nFinish.");
	        break;
	    }
	    else if(num4 == 0){
	        printf("\nSum: %d",num3);
	        break;
	    }
    }
}