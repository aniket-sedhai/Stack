//
//  Stack.h
//  Stack
//
//  Created by Aniket Sedhai on 7/11/24.
//

#ifndef Stack_h
#define Stack_h

#include <deque>
#include <iostream>

class Stack
{
public:
    //default constructor
    Stack();
    
    //copy constructor
    Stack(Stack& rhs);
    
    //copy assignment operator
    Stack& operator =(const Stack &rhs);
    
    bool empty() const;
    
    void pop();
    
    void push(double value);
    
    int size() const;
    
    void Swap(Stack& rhs);
    
    double top() const;
    
    friend std::ostream& operator <<(std::ostream& ostr, const Stack& rhs);
    
private:
    std::deque<double> MyDeque;
};


#endif /* Stack_h */
