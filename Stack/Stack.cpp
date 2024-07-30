//
//  Stack.cpp
//  Stack
//
//  Created by Aniket Sedhai on 7/11/24.
//

#include <stdio.h>
#include "Stack.h"
#include <iostream>
#include <exception>

//default constructor
Stack::Stack():
    MyDeque()
{
    
}

//copy constructor
Stack::Stack(Stack& rhs):
    MyDeque(rhs.MyDeque)
{
    
}

//copy assignment operator
Stack& Stack::operator =(const Stack &rhs)
{
    MyDeque = rhs.MyDeque;
    return *this;
}

bool Stack::empty() const
{
    return MyDeque.empty();
}

void Stack::pop()
{
    if (!MyDeque.empty())
        MyDeque.pop_back();
}

void Stack::push(double value)
{
    if (MyDeque.size() != MyDeque.max_size())
        MyDeque.push_back(value);
}

int Stack::size() const
{
    return static_cast<int>(MyDeque.size());
}

void Stack::Swap(Stack& rhs)
{
    Stack temp_stack;
    
    temp_stack.MyDeque = MyDeque;
    
    MyDeque = rhs.MyDeque;
    
    rhs.MyDeque = temp_stack.MyDeque;
}

double Stack::top() const
{
    if (!MyDeque.empty())
        return MyDeque.front();
    else
        throw (std::exception("Cannot call top() on an empty stack!!!"));
}

std::ostream& operator <<(std::ostream& ostr, const Stack& rhs)
{
    for (double val: rhs.MyDeque)
        ostr << val << " | ";
    ostr << std::endl;
    
    return ostr;
}
