#include <iostream>
#include <fstream>
using namespace std;
int main(){
            ifstream my_file("abc.txt"); //opening text file for writting
            if (!my_file){
                        cout << "error opening the file." << endl;
                        return 1;
            }
            string line;
            while(!my_file.eof()){
                        getline(my_file,line);
                        cout << line << endl;
            }
            my_file.close();
            return 0;
}