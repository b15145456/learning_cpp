#include <iostream>
#include <string>
using namespace std;
class BuckysClass{
    public:
        BuckysClass(string z){
           setName(z); 
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};
int main(){
   BuckysClass bo("aaaaa");
   cout << bo.getName() << endl;
   return 0;
}