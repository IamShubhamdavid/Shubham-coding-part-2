#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct node {
    int data;
    struct node* next;
}node;
node* insertatbegin(node* head,int d){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = d;
    if(head == NULL){
        newnode->next=NULL;
        head = newnode;
    }
    else{
    newnode->next=head;
    head=newnode;
    }
    return head;
}
node* insertatend(node* head,int d){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data=d;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
node* insertatpos(node* head,int d ,int pos){
    if(pos<=0){
        printf("invalid pos\n");
        return head;
    }
    if(pos==1){
        head= insertatbegin(head,d);
    }
    int count=1;
    node* curr=head;
    while(count<pos-1 && curr!=NULL){
        curr=curr->next;
        count++;
    } 
    if(curr!=NULL){
        node* newnode = (node*)malloc(sizeof(node));
        newnode->data=d;
        newnode->next=curr->next;
        curr->next=newnode;
    }
    else{
        printf("invalid pos");
        printf("\n");
    }
    return head;
}
int deleteatbegin(node** hptr){
    node* h=*hptr;
    if(h==NULL){
        return INT_MIN;
    }
    int value=h->data;
    node*curr=h;
    h=h->next;
    curr->next=NULL;
    free(curr);
    *hptr=h;
    return value;
}
int deleteatend(node** hptr){
    node* h=*hptr;
    if(h==NULL){
        return INT_MIN;
    }
    node*curr=h;
    node* prev=NULL;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    int value = curr->data;
    prev->next=NULL;
    free(curr);
    return value;
}
int deleteatpos(node** hptr,int pos){
    if(pos<=0){
        printf("invalid pos\n");
        return INT_MIN;
    }
    int value;
    if(pos==1){
        value=deleteatbegin(hptr);
        return value;
    }
    int count=1;
    node* prev=NULL;
    node* curr=*hptr;
    while(count<pos && curr!=NULL){
        prev=curr;
        curr=curr->next;
        count++;
    }
    if(curr!=NULL){
        value=curr->data;
        prev->next=curr->next;
        curr->next=NULL;
        free(curr);
        return value;
    }
    else{
        printf("invalid pos \n");
        return INT_MIN;
    }
}
int deletebyvalue(node** hptr,int val){
    node* h=*hptr;
    if(h==NULL){
        return INT_MIN;
    }
    int value=INT_MIN;
    while(h->data==val){
        h=h->next;
        value=deleteatbegin(hptr);
        *hptr=h;
    }
    node*prev=NULL;
    node*curr=h;
   // node* ahead;
    while(curr!=NULL ){
        //ahead=curr->next;
        if(curr->data==val){
            value=curr->data;
            prev->next=curr->next;
            //prev=prev->next;
            curr->next=NULL;
            free(curr);
           if(prev->next!=NULL)
                curr=prev->next->next;
        }
        else{
        prev=curr;
        curr=curr->next;
        }
        
    }
    return value;
}
node* reverse(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*prev=NULL;
    node*curr=head;
    node*ahead;
    while(curr!=NULL){
        ahead=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ahead;
    }
    return prev;
}
void print(node* head){
    node*temp=head;
    if(head==NULL){
        printf("list is empty");
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return;
}
int main(){
    node* head=NULL;
    int d,pos,value,val;
    while(1){
        printf("1.insert_at_begin\n2.insert_at_end\n3.insert_at_position\n4.delete_at_begin\n5.delete_at_end\n6.delete_at_position\n7.delete_value_from_list\n8.reverse_list\n9.print_list\n10.exit\n");
        int n;
        printf("enter the choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
               // int d;
                printf("enter the data:");
                scanf("%d",&d);
                head=insertatbegin(head,d);
                break;
            case 2:
               // int d;
                printf("enter the data:");
                scanf("%d",&d);
                head=insertatend(head,d);
                break;
            case 3:
                //int d,pos;
                printf("enter the data:");
                scanf("%d",&d);
                printf("enter the position:");
                scanf("%d",&pos);
                head=insertatpos(head,d,pos);
                break;
            case 4:
                value=deleteatbegin(&head);
                printf("value deleted %d",value);
                break;
            case 5:
                value=deleteatend(&head);
                printf("value deleted %d",value);
                break;
            case 6:
                //int pos;
                printf("enter the position:");
                scanf("%d",&pos);
                value=deleteatpos(&head,pos);
                printf("value deleted %d",value);
                break;
            case 7:
                //int val;
                printf("enter the value:");
                scanf("%d",&val);
                value=deletebyvalue(&head,val);
                printf("value deleted %d",value);
                break;
            case 8:
                printf("reverse link list\n");
                head=reverse(head);
                break;
            case 9:
                printf("linked list\n");
                print(head);
                printf("\n");
                break;
            case 10:
                exit(0);
                break;
            default:
            printf("invalid choice\n");
        }
    }
    return 0;
}