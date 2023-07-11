#include<iostream>
#define SIZE 2
using namespace std;

class stack
{
    int top;
    int data[SIZE];
    public:
    stack()
    {
        top=-1;
        
    }
    void push(int element)
    {
        if(isFull()==1)
           cout<<"stack is full";
        else
           data[++top]=element;
    }
    int pop()
    {
        if(isEmpty()==1)
           return -1;
        else
           return data[top--];
        
    }
    int isEmpty()
    {
        if(top = -1)
           return 1;
        else
           return 0;
    }
    int isFull()
    {
        if(top==SIZE-1)
          return 1;
        else 
          return 0;
    }
    int peek()
    {
        if(isEmpty()==1)
        {
            return -1;

        }
        else
           return data[top];
    }
};

int main()
{
    cout<<"Static Implement of stack\n";
    stack st;
    st.push(10);
    st.push(20);
    cout<<"\n stack is empty.."<<st.isEmpty();
    cout<<"\n Stack is Full.."<<st.isFull();
    cout<<"\nElement is at top position "<<st.peek();
    cout<<"\nElement is at top posi"<<st.peek();
    cout<<"\nElement is at top posi"<<st.peek();

    return 0;
}