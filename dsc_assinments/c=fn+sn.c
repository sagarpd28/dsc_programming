#include <stdio.h>
#include <string.h>

int main() {
    char firstname[50];
    char lastname[50];
    char fullname[100];

    // Input first name
    printf("Enter first name: ");
    scanf("%s", firstname);

    // Input last name
    printf("Enter last name: ");
    scanf("%s", lastname);

    // Store in another array
    strcpy(fullname, firstname);   // copy first name into fullname
    strcat(fullname, "");         // add a space
    strcat(fullname, lastname);    // add last name

    // Display the names
    printf("\nfirst Name: %s\n", firstname);
    printf("last Name : %s\n", lastname);
    printf("full Name : %s\n", fullname);

    return 0;
}
