#include<iostream>
using namespace std;
class Count {
    public:
    int value;
    public:
    Count() : value(5){}
    void operator ++ (){
        ++value;
    }
    void display(){
        cout<<"count : "<<value<<endl;
    }
};
int main(){
    Count count1;

    ++count1;
    count1.display();
    return 0;
}