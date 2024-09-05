#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Create and open a text file
    ofstream MyFile("filename.txt");
    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";
    // Close the file
    MyFile.close();
    
    string myText;
    // Open existing file
    ifstream MyReadFile("filename.txt");
    // Reading one line
    getline (MyReadFile, myText);
    // Close the file
    MyReadFile.close();
    
    cout << "The line from this file has this text: "<< myText<< endl;
return 0;
}