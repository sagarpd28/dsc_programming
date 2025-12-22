#include <stdio.h>

int main() {
    
    int a[100], n, temp;

    printf("Enter size of array is: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Elements of array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    return 0;
}