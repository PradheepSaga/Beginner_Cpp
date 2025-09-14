/* A Class_&_Objects_"files" program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ofstream MywriteFile("Filename.txt");
    
    MywriteFile << "  C++ is a high-level, general-purpose programming language developed by Bjarne Stroustrup as an extension of the C language. It is known for its performance, efficiency, and control over system resources and memory";
    
    MywriteFile.close();
    
    string mytext;
    
    ifstream MyreadFile("Filename.txt");
    
    while (getline(MyreadFile, mytext)){
        cout << mytext;
    }
    
    MyreadFile.close();
    
}
