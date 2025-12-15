#include <stdio.h>

int main() {
    
    int a[100], b[100];
    int n;

    printf("Enter size of array is: ");
    scanf("%d", &n);

    printf("Enter element of first array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Elements of first array is:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }

    for(int i=0;i<n;i++){
        b[i]=a[i];
    }


    printf("Elements of second array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n", b[i]);
    }  
    return 0;
}