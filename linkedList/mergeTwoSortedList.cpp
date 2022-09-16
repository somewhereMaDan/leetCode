#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head1 = NULL;
Node* head2 = NULL;

void Insert1(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;
  head1 = temp;
}

void Insert2(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;
  head2 = temp;
}

Node* mergeTwoList(Node* head1, Node* head2){
  Node* p1 = head1;
  Node* p2 = head2;
  Node* dummy = new Node();
  dummy->next = NULL; // it's a dummy node so we don't want it to point anywhere

  Node* p3 = dummy;

  // when 1st and 2nd list should not be NULL
  while (p1 != NULL && p2 != NULL)
  {
    if(p1->data < p2->data){
      p3->next = p1;
      p1 = p1->next;
    }else{
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;  // we also have to iterate here, otherwise we won't be able to add elements here
  }

  // When any one list either 1st or 2nd will be NULL,
  while (p1 != NULL)
  {
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
  }
  while (p2 != NULL)
  {
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
  }
  return dummy->next; 
  // we didn't assign any data to dummy so it'll store 0 or any garbage value
  // also we need the value from the next of the dummy node, beacuse from there the list will get started
   
}