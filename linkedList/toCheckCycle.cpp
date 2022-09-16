#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

bool CheckCycle(Node* head){
  if(head == NULL && head->next != NULL){
    return false;
  }
  Node* slow = head;
  Node* fast = head;

  while (fast->next != NULL && fast->next->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast){
      return true;
    }
  }
  return false;
}