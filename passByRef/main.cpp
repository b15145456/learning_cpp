#include <iostream>
using namespace std;
void passByValue(int x);
void passByReference(int* x);

int main()
{
    int betty = 13;
    int mark = 20;
    passByValue(betty);
    passByReference(&mark);
    
    cout <<"betty is now " << betty << endl;
    cout << "mark is now " << mark << endl; 
}
void passByValue(int x)
{
    x = 66;
}
void passByReference(int* x)
{
    *x = 66;
}