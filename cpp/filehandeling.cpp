#include <iostream>
#include <fstream>
using namespace std;
int main(){
            ofstream my_file("abc.txt"); //opening text file for writting
            my_file.close();
            return 0;
}