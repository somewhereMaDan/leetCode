#include<iostream>
#include<map>
using namespace std;

struct Node{
  int data;
  Node* next;
};

// 5 -> 2 -> 2 -> 4 -> 3 -> 4 

Node* deleteDuplicate(Node* head){ // if the head node is given
  map<int,int> m;
  Node* curr = head;
  m[curr->data] = 1; // assigning the first element of the list in map
  Node* prev = curr; // prev = 5
  curr = curr->next; // curr = 2

  while (curr != NULL)
  {
    if(m[curr->data]){ // if the data is present in the map
    // now after else or you can say after assigning the data in map
    // m[2] is present in the map
      
      prev->next = curr->next;
      // link of '2' (which is coming first) will be set to what is in the link section of '2' (which is coming after first),...
      // ,like it will store the address of node which have data '4'
      
      delete(curr);
    }else if(!(m[curr->data])){
      m[curr->data] = 1; // m[2] = 1
      prev = curr; // prev = link of '2' (which is coming first)
    }
    curr = prev->next; // curr = link of '2' (which is coming after the first)
  }
  return head;
}

