#include <iostream>

using namespace std;

class StackUsingLinkedList
{
private:
    int data;
    StackUsingLinkedList * next;
    StackUsingLinkedList * root;

public:

    StackUsingLinkedList()
    {
        next = nullptr;
        root = nullptr;
    }

    void push(const int &data);
    int pop();
    void display();
    bool isEmpty();
};

void StackUsingLinkedList::push(const int &data)
{
    StackUsingLinkedList *newNode = new(StackUsingLinkedList);
    newNode->data = data;
    newNode->next=root;
    root = newNode;
}

int StackUsingLinkedList::pop()
{
    int data = -1;
    if(root == nullptr)
    {
        cout<< "\n Stack is empty. Cannot pop";
    }
    else
    {
        data = root->data;
        root=root->next;
        cout<<"\n Element which is pop"<<data;
    }
    return data;
}

bool StackUsingLinkedList::isEmpty()
{
    return (root == nullptr);
}

void StackUsingLinkedList::display()
{
    StackUsingLinkedList *looping = root;
    while(looping!=nullptr)
    {
        cout<<"\n The element in Stack is"<<looping->data;
        looping = looping->next;
    }
}


int main()
{
    cout << "Hello world!" << endl;
    StackUsingLinkedList *temp1 = new (StackUsingLinkedList);
    temp1->push(10);
    temp1->push(20);
    temp1->push(30);
    temp1->display();
    cout<<" \n IS the stack empty "<<temp1->isEmpty();;
    temp1->pop();
    temp1->pop();
    temp1->pop();
    temp1->pop();
    temp1->display();
    return 0;
}

