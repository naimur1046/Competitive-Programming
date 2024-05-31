#include <bits/stdc++.h>
using namespace std;
struct Node
{
     int data;
     Node *Left;
     Node *Right;
     Node(int value)
     {
          data = value;
          Left = NULL;
          Right = NULL:
     }
};

int main()
{
     Node binaryTree = new Node(1);
     binaryTree->Left = new Node(3);
     binaryTree->Right = new Node(4);
}
