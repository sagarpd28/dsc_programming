#include <stdio.h>
#include <stdlib.h>

// Structure for Circular Linked List
struct NODE {
    int data;
    struct NODE *next;
};

// Create new node
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

// Insert at end in Circular Linked List
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    // If list is empty
    if (head == NULL) {
        newNode->next = newNode;  // Point to itself
        return newNode;
    }

    struct NODE *temp = head;

    // Traverse to last node
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;

    return head;
}

// Display Circular Linked List
void display(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct NODE *temp = head;

    printf("Head -> ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(Back to Head)\n");
}

// Main Function
int main() {
    struct NODE *head = NULL;
    int n, value, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nCircular Linked List:\n");
    display(head);

    return 0;
}