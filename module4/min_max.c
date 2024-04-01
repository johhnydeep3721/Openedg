#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	/* your code */
	int i,j;
	int n = 10;
	float aux;
	for(i=0;i<n-1;i++){
	    for(j=0;j<n-i-1;j++){
	        if(numbers[j]<numbers[j+1]){
	            aux = numbers[j];
	            numbers[j] = numbers[j+1];
	            numbers[j+1] = aux;
	        }
	    
	 
	    }
	   for(int k=0;k<n;k++){
	       printf("%0.2f ",numbers[k]);
	   }
	   printf("\n");
	   
	}

	return 0;
}