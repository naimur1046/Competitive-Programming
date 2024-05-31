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

void PreOrder(Node *Root)
{
     if (Root == NULL)
          return;
     cout << Root->data << endl;
     PreOrder(Root->Left);
     PreOrder(Root->Right);
}
void InOrder(Node *Root)
{
     if (Root == NULL)
          return;
     InOrder(Root->Left);
     cout << Root->data << endl;
     InOrder(Root->Right);
}
void PostOrder(Node *Root)
{
     if(Root==NULL)
     return;
     PostOrder(Root->Left);
     PostOrder(Root->Right);
     cout<< Root->data << endl;
}

int main()
{
     Node *binaryTree = new Node(1);
     binaryTree->Left = new Node(5);
     binaryTree->Right = new Node(6);
     PreOrder(binaryTree);
}
