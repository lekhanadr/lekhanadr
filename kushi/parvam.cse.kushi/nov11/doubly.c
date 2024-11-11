#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL,*tail=NULL;
void create(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insertbegin(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value ");
    scanf("%d",&value);
     newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertend(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value ");
    scanf("%d",&value);
     newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void deletebegin(){
    struct node*temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}    
void deleteend(){
    struct node*temp=tail->prev; 
    tail=temp;
    temp=temp->next;
    tail->next=NULL;
    free(temp);
}
void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int choice;
    do{
        printf("enter the choice");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            create();
            break;
            case 2:
            insertbegin();
            break;
            case 3:
            insertend();
            break;
            case 4:
            deletebegin();
            break;
            case 5:
            deleteend();
            break;
            case 6:
            display();
            break;
            default:
            printf("invalid choice");
        }
    }while(choice!=0); 
}