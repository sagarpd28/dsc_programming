#include <stdio.h>
#include <stdlib.h>

// Self-referential structure
struct NODE {
    int data;
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
    newNode->next = NULL;
    return newNode;
}

// Insert node at end
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

// Insert node at middle (given position)
void insertAtPosition(struct NODE **head, int value, int pos) {
    struct NODE *newNode = createNode(value);

    // Case: insert at beginning
    if (pos == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct NODE *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position out of range
    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    // Insert in middle
    newNode->next = temp->next;
    temp->next = newNode;
}

// Display list
void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main
int main() {
    struct NODE *head = NULL;
    int n, value, pos;

    printf("Enter how many nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nSingly Linked List:\n");
    display(head);

    printf("\nEnter value to insert in middle: ");
    scanf("%d", &value);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    insertAtPosition(&head, value, pos);

    printf("\nList After Inserting:\n");
    display(head);

    return 0;
}
