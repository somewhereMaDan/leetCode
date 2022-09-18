// https://www.youtube.com/watch?v=dhLtP3UriEU&t=3s&ab_channel=CodeLibrary-byYogesh%26Shailesh
#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

// when the head is given as local variable in main function
// we are giving the head into this function in head (pointer variable) 

Node* deleteDuplicate(Node* head){
  Node* temp = head;
  if(!temp) return NULL;
  while (temp->next != NULL)
  {
    if(temp->data == temp->next->data){
      temp->next = temp->next->next;
    }else{
      temp = temp->next;
    }
  }
  return head;
  // we're are returning head and not temp because temp now has the address of the last node and head have the address of starting node of the list
};