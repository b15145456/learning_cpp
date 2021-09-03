#include <iostream>
using namespace std;
 
// bucky will auto change to the type you need
template<class bucky>
bucky addCrap(bucky a. bucky b){
    return a+b;
}

int main(){
    int x=7, y=43, z;
    z=addCrap(x, y);
    cout << z << endl;
}