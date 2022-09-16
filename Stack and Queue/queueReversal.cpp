#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> rev(queue<int>q){
  stack<int> s;
  while (q.empty())
  {
    int element = q.front(); // taking the front element
    q.pop(); // poping the front element from the queue
    s.push(element); // pushing the front element in the stack
    // which will be it's top
  }
  while (s.empty())
  {
    int element = s.top(); // taking the top element
    s.pop(); // poping the front element from the stack
    q.push(element); // pushing the element which is present at the top of the stack, 'that was last element in the queue';
  }
  return q;
}

int main(int argc, char const *argv[])
{
  return 0;
}
