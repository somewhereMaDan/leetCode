#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head = NULL;

Node* merge(Node* r1, Node* r2){
  Node* root1 = r1; 
  Node* root2 = r2;
   
  Node* dummy = new Node(); // or we could have written Node(0)
  dummy->next = NULL;
  Node* p = dummy;

  while (root1 != NULL && root2 != NULL)
  {
    if(root1->data < root2->data){
      p->next = root1;
      root1 = root1->next;
    }else{
      p->next = root2;
      root2 = root2->next;
    }
    p = p->next;
  }
  
  while (root1 != NULL)
  {
    p->next = root1;
    root1 = root1->next;
    p = p->next;
  }

  while (root2 != NULL)
  {
    p->next = root2;
    root2 = root2->next;
    p = p->next;
  }

  return dummy->next;
}

Node* SortList(Node* root){
  if(root == NULL || root->next == NULL) return head;

  Node* temp = head;
  Node* slow = head;
  Node* fast = head;

  while (fast != NULL && fast->next != NULL){}
  {
    temp = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  temp->next = NULL; // breaking the link to the right side of the list

  Node* left_node = SortList(head);
  Node* right_node = SortList(slow); // slow is the head of the right side of the list

  return merge(left_node,right_node);
}