 #include <iostream>
 using namespace std;

 int main(){
     try{
         int momsAge = 30;
         int sonsAge = 34;

         if (sonsAge > momsAge){
             throw 99; 
         }
     }catch(int x){
         cout << "son can not be order than mon, ERROR NUMBER: "<< x << endl;
     }
     


 }