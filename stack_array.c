#include<stdio.h>
#include<stdlib.h>
#define size 10

typedef struct stack{
    int top;
    int item[size];
}stack;
void push(stack*s,int value){
    s->top++;
    s->item[s->top]=value;
}
int pop(stack*s){
    int element;
    element=s->item[s->top];
    s->top--;
    return element;
   
}
int peep(stack*s){
    return s->item[s->top];
}
void display(stack*s){
    for(int i=s->top;i>=0;i--){
        printf("%d ",s->item[i]);
    }
}

int main(){
     stack s;//stack s
     s.top=-1;//s.top=-1
     int choice,value;
     
    while(1){
     printf("------stack menu------ \n");
     printf("enter your choice :\n1.Push\n2.pop\n3.display\n4.peep\n5.exit\n");
     printf("your choice is: ");
     scanf("%d",&choice);
         switch (choice)
     {
     case 1:printf("enter the element to be pushed: ");
            scanf("%d",&value);
            push(&s,value);
            break;
     case 2:printf("the popped element is: %d\n",pop(&s));
            break;
     case 3:printf("stack elements are:  ");
            display(&s);
            printf("\n");
            break;
     case 4:printf("top element is:  %d\n",peep(&s));
            break;
     case 5:printf("existing.... ");
            exit(0);
           
        
       
     
     default:printf("invalid choice");
             break;
     }
    }
    


    return 0;
}