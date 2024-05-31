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
int calHeight(Node *Root)
{
     if (Root == NULL)
          return 0;
     int leftHeight = calHeight(Root->Left);
     int rightHeight = calHeight(Root->Right);
     return max(leftHeight, rightHeight) + 1;
}
int calDiameter(Node *Root)
{
     if (Root == NULL)
          return 0;
     int leftHeight = calHeight(Root->Left);
     int rightHeight = calHeight(Root->Right);
     int leftDiameter = calDiameter(Root->Left);
     int rightDiameter = calDiameter(Root->Right);
     return max(leftHeight + rightHeight + 1, max(leftDiameter, rightDiameter));
}
int main()
{
     Node *Tree = new Node(3);
     Tree->Left = new Node(4);
     Tree->Right = new Node(5);
     Tree->Left->Left = new Node(9);
     cout << calDiameter(Tree) << endl;
}
