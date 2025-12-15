#include <stdio.h>

int main() {
    
    int n;

    printf("Enter size of array:");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int start=0, end= n-1;
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;
    }

    printf("reverse elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    return 0;
}