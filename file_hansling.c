#include <stdio.h>
#include <stdlib.h>

// Self referential structure
struct NODE {
    int data;
    struct NODE *next;
};

// Create node
struct NODE* createNode(int value)
{
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
struct NODE* insertEnd(struct NODE *head, int value)
{
    struct NODE *newNode = createNode(value);

    if(head == NULL)
        return newNode;

    struct NODE *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Write list to file
void writeToFile(struct NODE *head)
{
    FILE *fp = fopen("output.txt","w");

    struct NODE *temp = head;
    while(temp != NULL)
    {
        fprintf(fp,"%d -> ", temp->data);
        temp = temp->next;
    }

    fprintf(fp,"NULL");
    fclose(fp);
}

int main()
{
    struct NODE *head = NULL;
    FILE *fp;
    int n, value, i;

    fp = fopen("input.txt","r");

    if(fp == NULL)
    {
        printf("Input file not found\n");
        return 0;
    }

    // Read number of nodes
    fscanf(fp,"%d",&n);

    // Read values
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&value);
        head = insertEnd(head,value);
    }

    fclose(fp);

    // Write linked list to output file
    writeToFile(head);

    printf("Linked List created from file and written to output.txt\n");

    return 0;

}