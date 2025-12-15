#include <stdio.h>

int main() {
    
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    int pos=0, neg=0, even=0, odd=0;

    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos++;
        }
        if(a[i]<0){
            neg++;
        }
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }

    printf("positive number is: %d\n",pos); 
    printf("negative number is: %d\n",neg); 
    printf("even number is: %d\n",even); 
    printf("odd number is: %d\n",odd); 
    return 0;
}