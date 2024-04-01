
#include <stdio.h>

int main()
{
	/* your code */
	char number1[20],number2[20],number3[20],number4[20];
	printf("input number: \n");
	scanf("%s",number1);
	printf(" ");
	scanf("%s",number2);
	printf(" ");
	scanf("%s",number3);
	printf(" ");
	scanf("%s",number4);
	
	printf("%s.%s.%s.%s",number1,number2,number3,number4);
	
	return 0;
}