#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}node;

void append(node**,int item);
void insertFront(node**,int item);
void deleteItem(node**,int item);
void display(node**);


int main(){
    int ch,item;
    node*head=NULL;
    while (1)
    {
        printf("Enter your choice: \n 1.Append\n 2.InsertFront\n 3.DeleteItem\n 4.Display\n 5.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter the item to be inserted: ");
               scanf("%d",&item);
               append(&head,item);
               break;
        case 2:printf("Enter the item to be inserted: ");
               scanf("%d",&item);
               insertFront(&head,item);
               break;
        case 3:printf("Enter the item to be deleted: ");
               scanf("%d",&item);
               deleteItem(&head,item);
               break;
        case 4:display(&head);
               break;
        case 5:exit(0);
        
        default:printf("invalid number");
               break;
        }
    }
    

    return 0;
}

void append(node**p,int item){
    node*temp=*p,*r;
    r=(node*)malloc(sizeof(node));
    r->data=item;
    r->next=NULL;
    if(*p==NULL){
        *p=r;
    }
    else{
        temp=*p;
    
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=r;
    
    }
}
void insertFront(node**p,int item){
    node*r;
    r=(node*)malloc(sizeof(node));
    r->data=item;
    r->next=*p;
    *p=r;
}
void deleteItem(node**p,int item){
    node*temp=*p,*r=NULL;
    while (temp!=NULL)
    {
        if(temp->data==item){
            if(temp==*p){
                *p=temp->next;
                free(temp);
                temp=*p;
            }
            else{
                r->next=temp->next;
                free(temp);
                temp=r->next;
            }
        }
        else{
            r=temp;
            temp=temp->next;
        }
    }
}
void display(node**p){
    node*temp;
    temp=*p;
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}