// TPFBookStore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
int main()
{
    Book x("e", "yes","123456", "4", 5.6);
    for (String e : x.getAttrs())
    {
        std::cout << e << "\n";
    }
}
