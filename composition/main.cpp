#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;
int main(){
    Birthday birthObj(12, 28, 1986);
    People buckyRoberts("Bucky the King ", birthObj);
    buckyRoberts.printInfo();
}