
#include <stdio.h> 
int main(void) {
        int n;
        int numbers[n];
        int i, aux;
        int swapped;
        
        printf("input n: ");
        scanf("%d",&n);
    
        for(i = 0; i < n; i++) {
            printf("\nEnter value #%i\n",i + 1);
            scanf("%d",&numbers[i]);
        }
        
		/* sort them */
        do {
            swapped = 0;
            for(i = 0; i < n-1; i++) {
                if(numbers[i] > numbers[i + 1]) {
                    swapped = 1;
                    aux = numbers[i];
                    numbers[i] = numbers[i + 1];
                    numbers[i + 1] = aux;
                }
            }
        } while(swapped);
        
		/* print results */
        printf("\nSorted array: ");
        for(i = 0; i < n; i++)
            printf("%d ",numbers[i]);
        
		printf("\n");
        return 0;
}