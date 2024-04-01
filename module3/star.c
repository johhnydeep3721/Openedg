#include <stdio.h>

int main()
{   
    int i,j, num;
	/* your code */
	printf("Input number: ");
	scanf("%d",&num);
    
    if(num > 0){	
    	for(i=1;i<=num; i++){
    	    for(j=1;j<=i;j++){
    	        printf("*#");
    	    }
    	    printf("\n");
    	}
    }
    
    else if( num == 0){
        printf("*#");
    }

    return 0;
}