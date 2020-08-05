#include <iostream>
using namespace std;

 struct node{
 int num;
 struct node *next;
 };

void create (struct node *head, int n)
{
    struct node *p;
    struct node *temp=new node();
    temp->num=n;
    p=head;
    while(p->next)
        p=p->next;
    p->next=temp;
    temp->next=NULL;
}
 void displayList(struct node *head)
{
    struct node *tmp;
    if(head == NULL)
    {
       cout<<" List is empty.";
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            cout<<"   "<< tmp->num;
                        tmp = tmp->next;
        }
    }
}

    struct node *rotate_list(struct node *head,int k)
    {
        int count=0;
        struct node *p,*temp;
        temp=new node();
        p=head;
    while(p->next)
{
    p=p->next;
    count++;
    if(count==k-1)
    {
        temp=p;
    }

}

p->next=head;
head=temp->next;
temp->next=NULL;
return head;
    }


int main()
{
    int k;
    struct node *head=NULL,*p;
    head=new node();
    head->num=1;
    create (head,2);
    create (head,3);
    create (head,4);
    create (head,5);
    create (head,6);
    create (head,7);
    create (head,8);

    displayList(head);
    cout<<endl;
    cout<"Rotate by";
    cin>>k;
    head=rotate_list(head,k);
    displayList(head);
    }
