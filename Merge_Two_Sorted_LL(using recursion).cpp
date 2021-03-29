#include <iostream>

using namespace std;

class Node
{
public:
int data;
Node *next;

Node(int data)
  {
    this->data = data;

    this->next = NULL;
  }
};


Node* Insert()
{
int data;
cin>>data;

Node*head = NULL;
Node*tail = NULL;

while(data!= -1)
  {
    Node *newNode = new Node(data);
    if(head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    cin>>data;
  }
  return head;
}

void print(Node *head)
{
  Node *temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

// Node *merge(Node *head1, Node *head2 )
// {
// Node *final_head = NULL;
// Node *curr = NULL;
//
// if(head1->data < head2->data)
// {
//     // final_head = head1;
//     curr = head1;
//     head1 = head1->next;
// }
// else
// {
//   // final_head = head2;
//   curr = head2;
//   head2 = head2->next;
// }
// final_head = curr;
// ////////////////////////////////////
//
// while(head1 != NULL && head2 != NULL)
// {
//   if(head1 <= head2)
//   {
//     curr->next = head1;
//     curr = head1;
//     head1 = head1->next;
//   }
//   else
//   {
//     curr->next = head2;
//     curr = head2;
//     head2 = head2->next;
//   }
// }
//
// if(head1 == NULL)
//   curr->next = head2;
// else
//   curr->next = head1;
//
// return final_head;
// }

Node *merge(Node *head1, Node *head2 )
{
// BASE CASES
if(head1 == NULL)
  return head2;
if(head2 == NULL)
  return head1;

//CALC AND REC CALL

if(head1->data < head2->data)
  {
    head1->next = merge(head1->next,head2);
    return head1;
  }
else
{
  head2->next = merge(head1,head2->next);
  return head2;
}
//////////////

}

int main()
{

  Node *head1= Insert();
  cout<<"\n";
  cout<<"The first LL is : ";
  print(head1);
    cout<<"\n";
  Node *head2 = Insert();
  cout<<"\n";
  cout<<"The second LL is : ";
  print(head2);
  cout<<"\n";

  cout<<"\n The merged LL is : ";
  Node *head3 = merge(head1,head2);
  print(head3);
  return 0;
}
