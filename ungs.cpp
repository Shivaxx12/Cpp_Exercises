#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void insertfront(node **head, int data)
{
    node *new_node = *head;
    *head = new_node;
    cout << "inserted item" << " ";
};
void printlist(node *node)
{
    cout << "linked list";
    while (node != NULL)
    {
        cout << "node->data"
             << " ";
        node = node->next;
    }
}
int main()
{
    node *head = NULL;
    insertfront(&head, 4);
    insertfront(&head, 5);
    insertfront(&head, 6);
    printlist(head);
    return 0;
}