#include<stdio.h>


struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr  = malloc(sizeof(struct node));
    temp  = malloc(sizeof(struct node));
    ptr = head;
    temp->data = data;
    temp->link = NULL;

    while(ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    ptr = temp;

}

void print_data(struct node*head)
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else{
        struct node *ptr;
        ptr = head;
        while(ptr!=NULL)
        {
            printf("\t%d ",ptr->data);
            ptr = ptr->link;
        }
    }
}

struct node* add_at_beg(struct node *head,int data)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->link = head;
    head = new;
    return head;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    print_data(head);

            /// Insertion at the end

    add_at_end(head,90);
    add_at_end(head,95);
    add_at_end(head,100);
    add_at_end(head,105);

    printf("\n\t\tInsertion at the end \n\n");
    print_data(head);



            ///Insertion at the begining


    head = add_at_beg(head,40);
    head = add_at_beg(head,35);
    head = add_at_beg(head,30);
    printf("\n\n\t\tInsertion at the begining \n\n");
    print_data(head);

}
