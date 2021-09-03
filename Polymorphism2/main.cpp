#include <iostream>
using namespace std;

class Enemy{
    public:
        virtual void attack(){}
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout << "ninja attack!" << endl;
        }
};

class Monster: public Enemy{
    public:
        void attack(){
            cout << "monster attack!" << endl;
        }
};

int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
} 

//virtual function is a template function 
// when enemy1 call attack > find enemy class >find it is virtual > find it is ninja class >> attack()
// this chapter call the same func from same type, but diff result