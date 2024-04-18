#include <stdio.h>
int main()
{
    char *arr[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char **ptr = arr;
    int n;
    printf("input number: ");
    scanf("%d",&n);

    if(n <= 6){
        printf("pointer version: %s \n",ptr[n]);
        printf("array version : %s \n",arr[n]);
    }
    else{
        printf("error version: "); 
    }
    
    return 0;
   
}  