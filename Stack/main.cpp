//
//  main.cpp
//  Stack
//
//  Created by Aniket Sedhai on 7/11/24.
//

#include "Stack.h"
#include <iostream>
#include <ctime>

int main(void) {
    
    srand(time(NULL));
    const long max_rand = 1000000L;
    double lower_bound = 0;
    double upper_bound = 100;
    
    Stack first_stack;
    std::cout << "Created the first stack." << std::endl;

    std::cout << "Checking if the first stack is empty:" << std::endl;
    if (first_stack.empty())
        std::cout << "  First stack is empty." << std::endl;
    else
        std::cout << "  First stack is not empty." << std::endl;
    
    std::cout << "Pushing ten random numbers into the stack." << std::endl;
    for (int i = 0; i < 10; ++i)
        first_stack.push(lower_bound + (upper_bound - lower_bound) * (rand() % max_rand)/ max_rand);
    std::cout << "  First Stack: " << first_stack << std::endl;

    std::cout << "Checking for the top of the first stack: " << std::endl;
    try
    {
        std::cout << "  First stack's stack top is: " << first_stack.top() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "Popping 11 numbers from the stack." << std::endl;
    for (int i = 0; i < 11; ++i)
        first_stack.pop();
    std::cout << "  First Stack: " << first_stack << std::endl;

    std::cout << "Checking if the first stack is empty:" << std::endl;
    if (first_stack.empty())
        std::cout << "  First stack is empty." << std::endl;
    else
        std::cout << "  First stack is not empty." << std::endl;

    std::cout << "Checking for the top of the first stack: " << std::endl;
    try
    {
        std::cout << "  First stack's stack top is: " << first_stack.top() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "Pushing ten random numbers into the first stack." << std::endl;
    for (int i = 0; i < 10; ++i)
        first_stack.push(lower_bound + (upper_bound - lower_bound) * (rand() % max_rand)/ max_rand);
    std::cout << "  First Stack: " << first_stack << std::endl;
    
    std::cout << "Popping one item from the first stack." << std::endl;
    first_stack.pop();
    std::cout << "  First stack: " << first_stack << std::endl;

    Stack second_stack;
    std::cout << "Pushing seven random numbers into the second stack." << std::endl;
    for (int i = 0; i < 7; ++i)
        second_stack.push(lower_bound + (upper_bound - lower_bound) * (rand() % max_rand)/ max_rand);
    std::cout << "  Second Stack: " << second_stack << std::endl;
    std::cout << "Checking if the second stack is empty:" << std::endl;
    if (first_stack.empty())
        std::cout << "  Second stack is empty." << std::endl;
    else
        std::cout << "  Second stack is not empty." << std::endl;
    
    std::cout << "Swapping the first and second stack." << std::endl;
    first_stack.Swap(second_stack);
    
    std::cout << "  First stack: " << first_stack << std::endl;
    std::cout << "  Second stack: " << second_stack << std::endl;

    return 0;
}
