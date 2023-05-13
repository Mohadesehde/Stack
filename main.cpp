//
//  main.cpp
//  Stack
//
//  Created by Mohadeseh Delavarian on 11/28/20.
//  Copyright © 2020 Mohadeseh Delavarian. All rights reserved.
//

#include <iostream>

using namespace std;

// OOP Stack
//stack int array
class Stack{
public:
    Stack(int s=100)
    {
        if (s<=0)
        {
            maxsize=0;
            top=-1;
            st=NULL;
        }
        else{
            st=new int [s];
            if (!st)
            {
                maxsize=0;
                top=-1;
                return;
            }
            top=-1;
            maxsize=s;
        }
    }
    bool isempty()
    {
        if (top==-1)
            return true;
        else
            return false;
    }
    bool isfull()
    {
        if (top==maxsize-1)
            return true;
        else
            return false;
    }
    
    bool push( int x)
    {
        if(isfull())
            return false;
        else
        {
            top++;
            st[top]=x;
            return true;
        }
    }
    bool pop(int &x)
    {
        if(isempty())
            return false;
        else{
            x=st[top];
            top--;
            return true;
        }
    }
    int Top()
    {
        if(isempty())
            return NULL;
        else
            return st[top];
    }
    void display()
    {
        for ( int i=0; i<=top;i++)
        cout<<st[i]<<endl;
    }
    
private:
    int maxsize;
    int top;
    int * st;
};


//Structured programming Stack

const int maxsize =100;
int st[maxsize];
int top=-1;

bool isfull()
{
    if(top==maxsize-1)
        return true;
    else
        return false;
}

void push(int x)
{
    if(isfull())
        cout<<"Stack is full.";
    else
    {
        top++;
        st[top]=x;
    }
}

bool isempty()
{
    if(top==-1)
        return true;
    else
      return false;
}

int pop()
{
    if(isempty())
        return NULL;
    else
    {
        int x;
        x=st[top];
        top--;
        return x;
    }
}

int Top()
{
    if(isempty())
        return NULL;
    else
        return st[top];
        
}

void display()
{
    for(int i=0;i<=top;i++)
        cout<<st[i]<<endl;
}


