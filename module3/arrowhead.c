#include <stdio.h>

int main()
{
	/* your code */
	int i,j,num;
	printf("input number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	    printf("\n*");
	    for(j=0;j<i;j++){
	        printf(" ");
	    }
	    printf("*");
	}
	for(i=num-1;i>=0;i--){
	    printf("\n*");
	    for(j=0;j<=i;j++){
	        printf(" ");
	    }
	    printf("*");
	}
	
	
	return 0;
}