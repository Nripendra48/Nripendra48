#include<bits/stdc++.h>
using namespace std;
struct node
{   public:
    struct node *next;
    int data;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
node *push()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *temp;
    while(data!=-1)
    {
        node *n=new node(data);
        if(head==nullptr)
        {
            head=n;
            temp=n;
        }
        else{
            head->next=n;
            head=head->next;
        }cin>>data;
    }
    return temp;

}
void printq(node *head)
{
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
         temp=temp->next;
    }
    
}
int main()
{
   node *head=push();
    printq(head);
}