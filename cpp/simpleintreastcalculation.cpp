#include <iostream>
using namespace std;
void si(){
            int p , t , r , SI,pro;
            cout << "enter priniciple amount:";
            cin >> p;
            cout << "enter time:";
            cin >> t;
            cout << "enter rate of intreast:";
            cin >> r;

            pro= p*t*r;
            SI=pro/100;

            cout << "ROI on the given amount is "<< SI;
            cout<< "\nNow total amount after intreast "<< p+SI;
}
int main(){
            si();
            return 0;
}