#include <iostream>
using namespace std;
class myclass{
            public:
            int x;
            private:
            int y;
};
int main() 
{
            myclass myobj;
            myobj.x = 25;
            cout << "Hello world" << endl << myobj.x << endl;
            // myobj.y=50;
  return 0;
}