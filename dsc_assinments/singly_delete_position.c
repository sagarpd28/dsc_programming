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
// delete node at any postion
struct NODE* deleteAtPosition(struct NODE *head, int pos) {
    struct NODE *temp = head, *del;
    int i;

    // Case 1: Empty list
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }

    // Case 2: Delete first node
    if (pos == 1) {
        head = head->next;
        free(temp);
        return head;
    }

    // Traverse to (pos-1)th node
    for (i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    // Invalid position
    if (temp->next == NULL) {
        printf("Invalid position\n");
        return head;
    }

    // Delete node
    del = temp->next;
    temp->next = del->next;
    free(del);

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
    int n, value, i, pos;
 
    printf("Enter how many nodes "); 
    scanf("%d", &n); 
 
    for (i = 0; i < n; i++) { 
        printf("Enter value for node %d: ", i + 1); 
        scanf("%d", &value); 
        head = insertEnd(head, value); 
    } 
 
    printf("\nSingly Linked List:\n"); 
    display(head);

    printf("\nEnter postion to delete node: ");
    scanf("%d", &pos);
    head = deleteAtPosition(head, pos);
    display(head);
 
    return 0; 
} 
 