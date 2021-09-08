 #include <iostream>
 using namespace std;

 int main(){
     try{
          int num1;
          cout << "Enter first number: " << endl;
          cin >> num1;
        
          int num2;
          cout << "Enter second number: " << endl;
          cin >> num2;
          
          if (num2 == 0)
          {
              /* code */
              throw "777777777";
          }
          cout << num1/num2 << endl;
     }catch(...){       // ... means all types
         cout << "you cant divide by 0" << endl;
     }
 }