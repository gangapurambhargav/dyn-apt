#include <stdio.h>
#include <conio.h>
void main(){
    int a,i;
    printf("Enter the number\n");
    for(i=2;i<a-1;i++){
        if(a%i==0){
            printf("Not prime , divisible by %d",i);
            exit(0);

        }
    }
    printf("PRIME");
}