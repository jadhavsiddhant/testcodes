#include <iostream>
#include <fstream>
using namespace std;
int main(){
            ofstream my_file("abc.txt",ios::app); //opening text file for writting
            if (!my_file){
                        cout << "error opening the file." << endl;
                        return 1;
            }
            my_file << "Ronaldo is G.O.A.T" << endl;
            my_file << "Messi is sheep" << endl;
            my_file.close();
            return 0;
}