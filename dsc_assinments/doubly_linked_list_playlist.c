#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
    char song[50];
    char singer[50];
    int year;
    struct NODE *prev_song;
    struct NODE *next_song;
};

// Create new node
struct NODE* createNode(char song[], char singer[], int year) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));

    strcpy(newNode->song, song);
    strcpy(newNode->singer, singer);
    newNode->year = year;

    newNode->prev_song = NULL;
    newNode->next_song = NULL;

    return newNode;
}

// Insert at end
struct NODE* insertEnd(struct NODE *head, char song[], char singer[], int year) {
    struct NODE *newNode = createNode(song, singer, year);

    if (head == NULL)
        return newNode;

    struct NODE *temp = head;
    while (temp->next_song != NULL)
        temp = temp->next_song;

    temp->next_song = newNode;
    newNode->prev_song = temp;

    return head;
}

// Display current song
void displayCurrent(struct NODE *current) {
    printf("\nNow Playing\n");
    printf("Song   : %s\n", current->song);
    printf("Singer : %s\n", current->singer);
    printf("Year   : %d\n", current->year);
}

int main() {
    struct NODE *head = NULL;
    struct NODE *current;
    int choice;

    head = insertEnd(head, "Belageddu", "Vijay Prakash", 2018);
    head = insertEnd(head, "Mungaru Maleye", "Sonu Nigam", 2006);
    head = insertEnd(head, "Kesariya", "Arijit Singh", 2022);
    head = insertEnd(head, "Apna Bana Le", "Arijit Singh", 2022);


    current = head;

    do {
        displayCurrent(current);

        printf("\n1. Previous Song");
        printf("\n2. Next Song");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (current->prev_song != NULL){
                    current = current->prev_song;
                }
                
                break;

            case 2:
                if (current->next_song != NULL){
                    current = current->next_song;
                }
                
                break;

            case 3:
                printf("\nExiting playlist...\n");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while (choice != 3);

    return 0;
}
