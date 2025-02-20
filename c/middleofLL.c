#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<strings.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* middlenode(node* head)
{
    int count=0;
    // count number of nodes
    node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    };
    count=count/2;
    temp=head;
    while(count--)
    {
        temp=temp->next;
    }
    return temp;

}

    int main(){
        struct node* start = NULL;
    start = insert_beg(start);
    start = insert_beg(start);
    start = insert_beg(start);

    start = delete_end(start);
    display();
    return 0;
        
}