#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int data;
    struct stack*next;
}stack;
void push(stack**top,int value){
    stack*r;
    r=(stack*)malloc(sizeof(stack));
    r->data=value;
    r->next=*top;
    *top=r;

}
int pop(stack**top){
    stack*temp,*r;
    int item;
    temp=*top;
    r=*top;
    temp=temp->next;
    item=r->data;
    free(r);
    *top=temp;
    return item;
}
int peep(stack**top){
    return (*top)->data;
}
void display(stack**top){
    stack*temp;
    temp=*top;
    printf("stack elements are: ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
int main() {
    stack *head = NULL;
    int choice, value;

    while(1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. peep\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&head, value);
                break;
            case 2:
                value = pop(&head);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                value = peep(&head);
                if (value != -1) {
                    printf("Top element: %d\n", value);
                }
                break;
            case 4:
                display(&head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    
    return 0;
}
