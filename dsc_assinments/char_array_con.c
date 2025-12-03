#include <stdio.h>

int main() {
    char a[] = {'A', 'B', 'C'};
    char b[] = {'D', 'E', 'F'};

    int sizeA = sizeof(a);
    int sizeB = sizeof(b);

    char c[sizeA + sizeB];

    for (int i = 0; i < sizeA; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < sizeB; i++) {
        c[sizeA + i] = b[i];
    }

    printf("Concatenated char array: ");
    for (int i = 0; i < sizeA + sizeB; i++) {
        printf("%c ", c[i]);
    }

    return 0;
}
