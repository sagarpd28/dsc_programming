#include <stdio.h>

int main() {
    
    int a[100];
    int n;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter elements array:%d",n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }

    return 0;
}