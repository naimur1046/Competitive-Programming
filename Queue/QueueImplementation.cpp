/*
     Queue is a Data Structure which follow the technique of Frist in Frist Out (FIFO)
     Queue are used in
       Task scheduling
       Message passing
       Simulation of real-world scenarios
*/

#include <bits/stdc++.h>
using namespace std;
#define n 100
class Queue
{
     int *ara;
     int front;
     int back;

public:
     Queue()
     {
          ara = new int[n];
          front = -1;
          back = -1;
     }

public:
     void Push(int x)
     {
          if (back == n - 1)
               cout << "Queue is Overflowed" << endl;
          else
               ara[++back] = x;
          front = max(0, front);
     }

public:
     void Pop()
     {
          if (front == -1 && front > back)
               cout << "No Elements in Queue" << endl;
          else
               front++;
     }

public:
     int Peak()
     {
          if (front == -1 && front > back)
          {
               return -1;
               cout << "No elements here" << endl;
          }
          else
          {
               return ara[front++];
          }
     }

public:
     bool empty()
     {
          if (front == -1 && front > back)
               return true;
          else
               return false;
     }
};

int main()
{
     Queue queue;
     queue.Push(2);
     queue.Push(5);
     cout << queue.Peak() << endl;
}
