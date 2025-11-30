#include <stdio.h>

int main() {
    
    int a[] = {1, 2, 3, 4, 5}; 
    int b[] = {6, 7, 8, 9, 10};
    int sizeA = 5, sizeB = 5;
    int d = sizeA + sizeB;
    
    int c[d];


    for(int i=0; i<sizeA; i++){
        c[i]=a[i];
    }

    for(int i=0; i<sizeB; i++){
        c[sizeA+i] = b[i];

    }

    for(int i=0; i<d; i++){
        printf("concated array is %d ",c[i]);

    }
    return 0;
}