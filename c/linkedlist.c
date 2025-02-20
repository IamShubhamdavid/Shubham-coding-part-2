#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*insert_beg(struct node* start)
{
    struct node* new_node;
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=start;
    start=new_node;
    //printf("%d has been added in the beginging of ll",start->data);
    return start;
}
struct node*delete_end(struct node* start)
{
    struct node*ptr,*preptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return start;
}

void display(struct node *start)
{
    struct node* ptr= start;
    while(ptr!=NULL)
    {
        printf("%d -",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct node* start = NULL;
    start = insert_beg(start);
    start = insert_beg(start);
    start = insert_beg(start);

    start = delete_end(start);
    display(start);
    

    return 0;
}
