#include<stdio.h>

int main(){
    int a[50], n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: \n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        if(i%2==0){
            evenSum = evenSum + a[i];
        }
        else{
            oddSum = oddSum + a[i];
        }   
    }
    printf("Sum of even index elements = %d\n", evenSum);
    printf("Sum of odd index elements = %d\n", oddSum);

    return 0;
}