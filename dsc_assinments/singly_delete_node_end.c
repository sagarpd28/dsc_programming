#include <stdio.h> 
#include <stdlib.h> 
 
// Self-referential structure 
struct NODE { 
    int data; 
    struct NODE *next;   // Self-referential pointer 
}; 

// Function to create a new node 
struct NODE* createNode(int value) { 
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE)); 
    if (newNode == NULL) { 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    newNode->data = value; 
    newNode->next = NULL; 
    return newNode; 
} 
 
// Function to insert node at the end 
struct NODE* insertEnd(struct NODE *head, int value) { 
    struct NODE *newNode = createNode(value); 
 
    if (head == NULL) { 
        return newNode; 
    } 
 
    struct NODE *temp = head; 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
    temp->next = newNode; 
    return head; 
} 

struct NODE* deleteEnd(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return head;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct NODE *temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);       // delete last node
    temp->next = NULL;      // update link

    return head;
}

// Function to display the list 
void display(struct NODE *head) { 
    struct NODE *temp = head; 
    while (temp != NULL) { 
        printf("%d -> ", (*temp).data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 
 
// Main function 
int main() { 
    struct NODE *head = NULL; 
    int n, value, i; 
 
    printf("Enter how many nodes "); 
    scanf("%d", &n); 
 
    for (i = 0; i < n; i++) { 
        printf("Enter value for node %d: ", i + 1); 
        scanf("%d", &value); 
        head = insertEnd(head, value); 
    } 
 
    printf("\nSingly Linked List:\n"); 
    display(head);

    head = deleteEnd(head);
    printf("\nAfter delete last node:\n");
    display(head);
 
    return 0; 
} 
 