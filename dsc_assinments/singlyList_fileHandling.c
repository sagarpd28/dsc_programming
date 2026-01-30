#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *next;
};

struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);
    if (head == NULL) return newNode;

    struct NODE *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

void display(struct NODE *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void writeToFile(struct NODE *head) {
    FILE *fp = fopen("output.txt", "w");
    while (head != NULL) {
        fprintf(fp, "%d -> ", head->data);
        head = head->next;
    }
    fprintf(fp, "NULL\n");
    fclose(fp);
}

int main() {
    FILE *fp;
    struct NODE *head = NULL;
    int n, value, i;

    // WRITE input to file
    fp = fopen("input.txt", "w");
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    fprintf(fp, "%d\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        fprintf(fp, "%d ", value);
    }
    fclose(fp);

    // READ from file
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &n);
    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &value);
        head = insertEnd(head, value);
    }
    fclose(fp);

    printf("Singly Linked List:\n");
    display(head);

    writeToFile(head);
    printf("Linked list written to output.txt\n");

    return 0;
}
