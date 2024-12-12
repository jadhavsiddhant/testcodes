#include <iostream>
using namespace std;
template <class T1>
class test
{
            T1 a;
            public:
            test(T1 x)
            {
                        a=x;
            }
            void show()
            {
                        cout << a << "\n";
            }
};
int main() 
{
            test<float> test1(1.23f);
            test<int> test2(100);
            test<string> test3("pranav");
            test<char> test4('s');
            test1.show();
            test2.show();
            test3.show();
            test4.show();
  return 0;
}