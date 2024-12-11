#include <iostream>
#include <fstream>
using namespace std;
int main(){
            ofstream my_file("abc.txt"); //opening text file for writting
            if (!my_file){
                        cout << "error opening the file." << endl;
                        return 1;
            }
            my_file << "i'm idiot of the year" << endl;
            my_file << "bgt";
            my_file.close();
            return 0;
}