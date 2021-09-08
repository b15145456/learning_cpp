 #include <iostream>
 #include <fstream>
 using namespace std;

 int main(){
     
     ofstream buckyFile("tuna.txt");
     if (buckyFile.is_open()){
         /* code */
         cout << "file is open" << endl;
         buckyFile << "i love tuna\n";

     }else{
         cout << "meassed up " << endl;
     }
     
    buckyFile.close();
 
 }