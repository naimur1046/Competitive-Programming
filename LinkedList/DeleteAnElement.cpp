#include <bits/stdc++.h>
using namespace std;
class node
{
public:
     int data;
     node *next;
     node(int val)
     {
          data = val;
          next = NULL;
     }
};

// Inset a value on the Head

void insertAtHead(node *&n, int val)
{
     node *Nod = new node(val);
     Nod->next = n;
     n = Nod;
}

// Insert a value on the Tail

void insetAtTail(node *&n, int val)
{
     node *temp = n;
     if (temp == NULL)
          n = new node(val);
     while (temp->next != NULL)
     {
          temp = temp->next;
     }
     temp->next = new node(val);
}

// Search an Element

bool search(node *&n, int key)
{
     node *temp = n;
     while (temp != NULL)
     {
          if (temp->data == key)
               return true;
          temp = temp->next;
     }
     return false;
}

// Display all elements in the linked list

void display(node *&n)
{
     node *temp = n;
     while (temp != NULL)
     {
          cout << temp->data << endl;
          temp = temp->next;
     }
}

// Delete and element from the linked list

void deletion(node *&n, int key)
{
     node *temp = n;
     while (temp->next->data != key)
     {
          temp = temp->next;
     }
     node *todelete = temp->next;
     temp->next = temp->next->next;
     delete todelete;
}

// Delete an Element from the head

void deleteElementHead(node *&n)
{
     if (n == NULL)
          return;
     node *todelete = n;
     n = n->next;
     delete todelete;
}

int main()
{
     node *nod = new node(5);
     insetAtTail(nod, 15);
     insetAtTail(nod, 1);
     insetAtTail(nod, 10);
     insertAtHead(nod, 50);
     display(nod);
     deletion(nod, 10);
     deleteElementHead(nod);
     display(nod);
}
