#include<stdio.h>
#include<stdlib.h>

typedef struct Queue
{   
    int data;
    struct Queue *next;
}Queue;

void enqueue(Queue**front , Queue**rear, int item);
int dequeue(Queue**front , Queue**rear);
void display(Queue*front);


int main(){
    int ch , item;
    Queue*front=NULL;
    Queue*rear=NULL;
    while (1)
    {
        printf("enter your choice\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n");
        printf("your choice is : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: printf("enter the data to be inserted: \n");
                scanf("%d",&item);
                enqueue(&front,&rear,item);
                break;
        case 2: item=dequeue(&front,&rear);
                printf("the deleted item is: %d\n",item);
                break;
        case 3: printf("the elements of queue are : \n ");
                display(front);
                break;
        case 4: exit(0);
                break;
        
        default:printf("invalid choice\n");
                break;
        }
    }
    

    return 0;
}

void enqueue(Queue**front , Queue**rear, int item){
    Queue*newnode=(Queue*)malloc(sizeof(Queue));

    newnode->data=item;
    newnode->next=NULL;
    if(*rear==NULL){
        *front=*rear=newnode;
    }
    else{
        (*rear)->next=newnode;
        *rear=newnode;
    }
    printf("inserted item: %d\n",item);

}
int dequeue(Queue**front , Queue**rear){
    int item=(*front)->data;
    Queue*temp=*front;
    *front=(*front)->next;
    if(*front == NULL){
        *rear==NULL;
    }
    free(temp);
    return item;
}

void display(Queue*front){
    if(front==NULL){
        printf("queue is empty\n");
    }
    Queue*temp=front;
    while(temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    printf("\n");
}


