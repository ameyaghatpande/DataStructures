#include <iostream>

using namespace std;

const int MAX = 100;

class AmeyaStack
{
private:
    int Stack[MAX];
    int top ;

public:
    AmeyaStack()
    {
        top = -1;
    };

    bool isEmpty();
    void push(int value);
    int pop();
    void display();

};

bool AmeyaStack::isEmpty()
{
    return top == -1;
}

void AmeyaStack::push(int value)
{
    if(top >=MAX)
    {
        cout<<"\n Stack is full. Cannot push more";
        return;
    }
    else
    {
        Stack[++top] = value;
    }
}

int AmeyaStack::pop()
{
    if(top == -1)
    {
        cout <<"\n The stack is empty. Cannot pop elements";
        return -1;
    }
    else
    {
        int temp = Stack[top];
        top --;
        return temp;
    }
}

void AmeyaStack::display()
{
    int looping = 0;
    while(looping <= top)
    {
        cout<<"\n"<<Stack[looping];
        looping++;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    AmeyaStack temp1;
    temp1.push(10);
    temp1.push(20);
    temp1.push(30);
    temp1.display();
    bool isempty = temp1.isEmpty();
    cout<<"The stack is "<<isempty;
    temp1.pop();
    temp1.display();
    return 0;
}
