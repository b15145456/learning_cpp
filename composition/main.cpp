#include <iostream>
#include "Birthday.h"
#include "People.h"
#include "People.cpp"
#include "Birthday.cpp"
using namespace std;
int main(){
    Birthday birthObj(12, 28, 1986);
    People buckyRoberts("Bucky the King ", birthObj);
    buckyRoberts.printInfo();
}