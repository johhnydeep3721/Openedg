;
    scanf("%d",&numbers);
    if(numbers < 1 || numbers > 1024*1024){
        printf("Too much memory: ");
        return 1;
    }
    c = (char*)malloc(numbers*sizeof(char));

    if(c == NULL){
        printf("memory located fail");
        return 1;
    }

    c[0] = 'A';
    for(int i=0;i<numbers;i++)
{
    c[i]=(c[i-1] -'A'+1)%26 +'A';
    printf("%c",c[i]);
}
