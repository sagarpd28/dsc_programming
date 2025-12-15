#include <stdio.h>

int main() {
    
    int a[]={1, 2, 3, 4, 5};
    int sum = 0;

    printf("Array elements are :\n");
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
        sum += a[i];

    }
    printf("sum of elemets is:%d", sum);

    return 0;
}