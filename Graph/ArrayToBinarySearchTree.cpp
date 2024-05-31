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
Node *insetNode(Node *Root, int val)
{
     if (Root == NULL)
          return new Node(val);

     if (val < Root->data)
     {
          Root->Left = insetNode(Root->Left, val);
     }
     else
     {
          Root->Right = insetNode(Root->Right, val);
     }

     return Root;
}
void inOrder(Node *Root)
{
     if (Root == NULL)
          return;
     inOrder(Root->Left);
     cout << Root->data << endl;
     inOrder(Root->Right);
}
int main()
{
     Node *Root = NULL;
     Root = insetNode(Root, 5);
     insetNode(Root, 3);
     insetNode(Root, 1);
     inOrder(Root);
     return 0;
}
