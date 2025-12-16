#include <stdio.h>

int main() {
    
    int a[100], key, n, found=0, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array is:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Elements of array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n", a[i]);
    }

    printf("Enter elements to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Element found at index: %d\n", i);
            printf("Element found at position: %d\n", i+1);
            found =1;
            break;
        }
    }

    if(found ==0){
        printf("Element not found");
    }
    return 0;
}