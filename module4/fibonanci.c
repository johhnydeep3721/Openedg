#include <stdio.h>

int main()
{
	/* your code */
	int n, i;
	printf("input number: ");
	scanf("%d",&n);
	int fibo[n];
	fibo[0]=0;
	fibo[1]=1;
	for(i=2;i<=n;i++){
	    fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(i=1;i<=n;i++){
	    printf("\n%d",fibo[i]);
	}
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("\n%d",fibo[i]);
        }
    }
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("\n%d",fibo[i]);
        }
    }
}