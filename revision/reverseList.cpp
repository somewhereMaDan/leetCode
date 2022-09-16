#include<iostream>
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

void reverse(){
  Node* curr = head;
  Node* prev = NULL;
  Node* nxt;

  while (curr != NULL)
  {
    nxt = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nxt;
  }
  head = prev;
}

void print(){
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  Insert(5);
  Insert(4);
  Insert(3);
  Insert(2);
  Insert(1);

  print();
  reverse();
  print();
  return 0;
}
