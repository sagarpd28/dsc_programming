#include <stdio.h>

int main() {
    
    FILE *f;

    f = fopen("input.txt", "w");
    if(f==NULL){
        printf("Error openingfile.\n");
        return 1;
    }

    fprintf(f, "hi vinay\n");
    

    fclose(f);

    return 0;
}