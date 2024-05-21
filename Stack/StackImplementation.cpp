/*
     Stack is the Data Structure which uses Last in Frist Out (LIFO) mechanism.
     Coin of statue is the example of stack.
     We use this in Recursion
     There are many operation of Stack
     Pop(), Push(), Top(), Empty()
*/
#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
     int *arr;
     int top;

public:
     Stack()
     {
          arr = new int[n];
          top = -1;
     }

public:
     void Push(int x)
     {
          if (top == n - 1)
               cout << "Stack Overflow" << endl;
          else
               arr[++top] = x;
     }

public:
     void Pop()
     {
          if (top == -1)
               cout << "Stack Underflow" << endl;
          else
               top--;
     }

public:
     int Top()
     {
          if (top == -1)
               cout << "Array is empty" << endl;
          else
               return arr[top];
     }

public:
     void Empty()
     {
          if (top == -1)
               cout << "Array is empty" << endl;
          else
               cout << "Array is not empty" << endl;
     }
};
int main()
{
     Stack stack;
     stack.Push(5);
     stack.Push(6);
     cout << stack.Top() << endl;
}
