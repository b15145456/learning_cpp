 #include <iostream>
 #include <fstream>
 using namespace std;

 int main(){
     
     ofstream buckyFile;
     buckyFile.open("tuna.txt");
    
    buckyFile << "i love tuna\n";
    buckyFile.close();
 
 }