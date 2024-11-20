#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;

}node;
typedef struct queue{
    node*front;
    node*rear;
}queue;

void enqueue(queue*,int);
int dequeue(queue*);
void display(queue*);
int main(){
    int ch,item,storing;
    queue q;
    q.front=q.rear=NULL;
    while(1){
    printf("Please Select an Option:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
    printf("Your choice is: ");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("Enter the data to be inserted : ");
                scanf("%d",&item);
                enqueue(&q,item);
                break;
        case 2: storing=dequeue(&q);
                if(storing!=-1){
                    printf("The dequeued item is: %d\n",storing);
                }
                break;
        case 3: display(&q);
                break;
        case 4: exit(0);
        default: printf("Invalid\n");
    }
    }


    return 0;
}

void enqueue(queue*q,int item){
    node*newNode=(node*)malloc(sizeof(node));
    newNode->data=item;
    newNode->next=NULL;
    if(q->rear==NULL){
        q->front=q->rear=newNode;
    }else{
        q->rear->next=newNode;
        q->rear=newNode;
    }

}

int dequeue(queue*q){
    if(q->front==NULL){
        printf("queue is empty\n");
        return -1;
    }
    node*temp=q->front;
    int storing=temp->data;
    q->front=q->front->next;
    free(temp);
    return storing;
}

void display(queue*q){
    node*temp=q->front;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;

    }
    printf("NULL\n");
}