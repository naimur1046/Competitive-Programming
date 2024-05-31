#include <bits/stdc++.h>
using namespace std;
struct Node
{

     int data;
     Node *Left, *Right;
     Node(int val)
     {

          data = val;
          Left = NULL;
          Right = NULL;
     }
};


void InOrder(Node *Root)
{
     if (Root == NULL)
          return;
     PreOrder(Root->Left);
     cout << Root->data << endl;
     PreOrder(Root->Right);
}

int main()
{
     Node *binaryTree = new Node(1);
     binaryTree->Left = new Node(5);
     binaryTree->Right = new Node(6);
     PreOrder(binaryTree);
}
