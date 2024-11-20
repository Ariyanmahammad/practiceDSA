#include<stdio.h>
#include<stdlib.h>

#define size 100

typedef struct queue{
    int item[size];
    int front , rear;

}queue;
void enqueue(queue*q,int data);
int dequeue(queue*q);
void display(queue*q);
int main(){
    queue q;
    q.front=-1;
    q.rear=-1;
    int ch,data,storing;
    while(1){
        printf("enter your choice\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("your choice is: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: printf("enter the data to be inserted: ");
                scanf("%d",&data);
                enqueue(&q,data); 
                break;
        case 2: storing=dequeue(&q);
               if(storing!=-1){
                    printf("deleted item is : %d\n",storing);
               }
                break;
        case 3: display(&q);
                break;

        case 4: exit(0);
        
        default: printf("invalid choice");
                 break;
        }
    }

    return 0;
}

void enqueue(queue*q,int data){
    if(q->front==-1)q->front=0;
    q->rear++;
    q->item[q->rear]=data;
}

int dequeue(queue*q){
    int storing= q->item[q->front];
    q->front++;
    if(q->front>q->rear){
        q->front=q->rear=-1;
    }
    return storing;


}
void display(queue*q){
    for(int i=q->front;i<=q->rear;i++){
        printf("%d <- ",q->item[i]);
        
    }
    printf("NULL");
    printf("\n");

}