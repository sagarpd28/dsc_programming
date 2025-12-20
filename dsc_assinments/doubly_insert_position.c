#include <stdio.h>  
#include <stdlib.h> 

// Self-referential structure for Doubly Linked List 
struct NODE { 
    int data; 
    struct NODE *prev;   
    struct NODE *next;   
}; 

// Function to create a new node 
struct NODE* createNode(int value) { 
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE)); 
    if (newNode == NULL) { 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    newNode->data = value; 
    newNode->prev = NULL; 
    newNode->next = NULL; 
    return newNode; 
}

// Function to insert node at the end 
struct NODE* insertEnd(struct NODE *head, int value) { 
    struct NODE *newNode = createNode(value); 
    if (head == NULL) return newNode; 

    struct NODE *temp = head; 
    while (temp->next != NULL) temp = temp->next; 

    temp->next = newNode; 
    newNode->prev = temp; 
    return head; 
}

// Function to insert at a given position
struct NODE* insertAtPosition(struct NODE *head, int value, int pos) {
    struct NODE *newNode = createNode(value);

    if (pos == 1) { // Insert at beginning
        newNode->next = head;
        if (head != NULL) head->prev = newNode;
        return newNode;
    }

    struct NODE *temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position is beyond list length. Inserting at end.\n");
        return insertEnd(head, value);
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) temp->next->prev = newNode;
    temp->next = newNode;

    return head;
}

// Function to display the list (forward) 
void display(struct NODE *head) { 
    struct NODE *temp = head; 
    printf("NULL <-> "); 
    while (temp != NULL) { 
        printf("%d <-> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 

int main() { 
    struct NODE *head = NULL; 
    int n, value, i, pos; 

    printf("How many nodes? "); 
    scanf("%d", &n); 

    for (i = 0; i < n; i++) { 
        printf("Enter value for node %d: ", i + 1); 
        scanf("%d", &value); 
        head = insertEnd(head, value); 
    } 

    printf("\nDoubly Linked List (Forward Traversal):\n"); 
    display(head); 

    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert at: ");
    scanf("%d", &pos);

    head = insertAtPosition(head, value, pos);

    printf("\nDoubly Linked List after insertion:\n");
    display(head);

    return 0; 
}
