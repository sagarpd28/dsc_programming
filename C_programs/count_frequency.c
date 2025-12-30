#include <stdio.h>

int main() {
    int a[] = {1,2,2,3,3,3};
    int n = 6;

    for(int i=0;i<n;i++) {
        int count = 1;
        if(a[i] == -1) continue;

        for(int j=i+1;j<n;j++) {
            if(a[i] == a[j]) {
                count++;
                a[j] = -1;
            }
        }
        printf("%d occurs %d times\n", a[i], count);
    }
    return 0;
}
