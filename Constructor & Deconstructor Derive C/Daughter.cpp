#include <iostream>
#include "Mother.h"
using namespace std;

Daughter::Daughter()
{
    cout << "I am the Daughter constructor" << endl;
    // two ways to access staff !!
}

Daughter::~Daughter()
{
    cout << "Daughter deconstructor" << endl;

    // two ways to access staff !!
}