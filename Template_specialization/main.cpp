#include <iostream>
using namespace std;
 
 template <class T>
 class Spunky{
     public:
        Spunky(T x){
            cout << x << " is not a character! " << endl;
        }

 };

//when new a object and pass char as variable they will use this class!
template <>
class Spunky<char>{
    public:
        Spunky(char x){
            cout << x << " is indeed a character! " << endl;
        }
};

int main(){
    Spunky<int> obj1(7);
    Spunky<double> obj2(3.157);
    Spunky<char> obj3('q');
}