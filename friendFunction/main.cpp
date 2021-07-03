#include <iostream>
using namespace std;
class StankFist{
    public:
        StankFist(){stinkyVar=0;}
    private:
        int stinkyVar;

    friend void stinkysFriend(StankFist &sfo); //trust this function to access private variable!
};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}
int main(){
    StankFist bob;
    stinkysFriend(bob);
}