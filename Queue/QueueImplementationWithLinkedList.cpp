#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
     int data;
     Node *next;

public:
     Node(int val)
     {
          data = val;
          next = NULL;
     }
};

class Queue
{
public:
     Node *front;
     Node *back;

public:
     Queue()
     {
          front = NULL;
          back = NULL;
     }

public:
     void Push(int val)
     {
          Node *n = new Node(val);
          if (front == NULL)
          {
               front = n;
               back = n;
          }
          back->next = n;
          back = n;
     }

public:
     void Pop()
     {
          if (front == NULL)
               cout << "Queue Underflow " << endl;
          else
          {
               Node *todelete = front;
               front = front->next;
               delete todelete;
          }
     }

public:
     int Pick()
     {
          if (front == NULL)
          {
               cout << "Queue is Empty" << endl;
               return -1;
          }
          else
          {
               int val = front->data;
               return val;
          }
     }

public:
     bool isEmpty()
     {
          if (front == NULL || front == back)
               return true;
          else
               return false;
     }
};

int main()
{
     Queue queue;
     queue.Push(5);
     queue.Push(10);
     cout << queue.Pick() << endl;
}
