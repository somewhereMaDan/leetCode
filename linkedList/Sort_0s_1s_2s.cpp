#include<iostream>
// Sort Colors
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head = NULL;

void Insert(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

// void segregate(vector<int>&nums)
void segregate(){
  int low = 0;
  int mid = 0;
  // int high = 
}

void print(){
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main(int argc, char const *argv[])
{
  Insert(0);
  Insert(1);
  Insert(0);
  Insert(0);
  Insert(2);
  Insert(1);
  Insert(1);
  Insert(2);


  return 0;
}
