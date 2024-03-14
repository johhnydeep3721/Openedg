#include <stdio.h>

int main()
{
	/* your code */
	int a, b, c, d;
	printf("input number:\n");
	scanf("%d",&a);
	printf("\n");
	scanf("%d",&b);
	printf("\n");
	scanf("%d",&c);
	printf("\n");
	scanf("%d",&d);
	
	if(a >= 0 && a <= 255 && b >= 0 && b <= 255 && c >= 0 && c <= 255 && d >= 0 && d <= 255)
	{
	        printf("Human-readable IP address is: %d.%d.%d.%d", a, b, c, d);
	        
	        unsigned int x = (a << 24) | (b << 16) | (c << 8) | d;
	        printf("\nIP address as a 32-bit number: %u",x);
	}
	
	return 0;
}