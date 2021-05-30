#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally()
{
    cout << "i am a constructor " << endl;
}

Sally::~Sally()
{
    cout << "i am a deconstructor " << endl;
    // it will appear when the object is deleted !!
}