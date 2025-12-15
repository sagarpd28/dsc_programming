#include <stdio.h>

int main() {
    
    int a[100], n;
    float sum=0, avg;

    printf("Enter size of array is:");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }

    avg=sum/n;

    printf("Average of elements of array:%.4f\n", avg);

    return 0;
}