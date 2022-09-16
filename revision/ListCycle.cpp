#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

// slow and fast approach
Node* head = NULL;

bool hasCycle(){
  if (head == NULL && head->next == NULL)
  {
    return false;
  }else{
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
  }
  return false;
}