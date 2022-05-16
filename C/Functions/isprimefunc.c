int isprime(int a){
    int i;
    for(i=2;i<a-1;i++){
        if(a%i==0)
        {
            return (0);
        }
        }
    return (1);
}
void main()
{
    int a;
    int a_p;
    printf("Enter the number");
    printf("%d",&a);
    a_p = isprime(a);
    if(a_p==1)
    {
        printf("%d is Prime",&a);
    }
    else{
        printf("%d not a prime",a);
    }
    printf("Enter another number\n");
    scanf("%d",&a);
    a_p = isprime(a);
    if(a_p==1)
    {
        printf("%d is prime",a);
    }
    else{
   printf("%d Not prime number",a);
    }

}