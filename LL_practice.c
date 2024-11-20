#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void append(node **, int);
void insertFront(node **, int);
void deleteKey(node **, int);
void display(node **);

int main() {
    int ch, item;
    node *head = NULL;
    while (1) {
        printf("Enter your choice \n1. Append\n2. Insert Front\n3. Delete Item\n4. Display\n5. Exit\n");
        printf("Your choice is: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the item to be inserted: ");
                scanf("%d", &item);
                append(&head, item);
                break;
            case 2:
                printf("Enter the item to be inserted: ");
                scanf("%d", &item);
                insertFront(&head, item);
                break;
            case 3:
                printf("Enter the item to be deleted: ");
                scanf("%d", &item);
                deleteKey(&head, item);
                break;
            case 4:
                display(&head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}

void append(node **p, int item) {
    node *temp = *p, *r;
    r = (node *) malloc(sizeof(node));
    r->data = item;
    r->next = NULL;
    if (*p == NULL) {
        *p = r;
    } else {
        temp = *p;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = r;
    }
}

void insertFront(node **p, int item) {
    node *r;
    r = (node *) malloc(sizeof(node));
    r->data = item;
    r->next = *p;
    *p = r;
}

void deleteKey(node **p, int item) {
    node *temp = *p, *prev = NULL;
    while (temp != NULL && temp->data == item) {
        *p = temp->next;
        free(temp);
        temp = *p;
    }
    while (temp != NULL) {
        while (temp != NULL && temp->data != item) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) return;
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
    }
}

void display(node **p) {
    node *temp = *p;
    while (temp != NULL) {
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf(" NULL\n");
}
