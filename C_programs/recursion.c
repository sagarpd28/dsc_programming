#include<stdio.h>

int factorial(int n);

int main(){
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("%d! = %d", num, result);

    return 0;
}

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }

    else{
        return n*factorial(n-1);
    }
}