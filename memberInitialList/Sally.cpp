#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b)
: regVar(a), constVar(b)    //如果想要初始化一個const的變數
{
    
}

// void Sally::print(){
//     cout << "regular var is: " << regVar << endl;
//     cout << "const variabel is : " << constVar << endl;
// }