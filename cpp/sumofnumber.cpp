#include <iostream>
using namespace std;
int sum(int k) {  
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
            int k;
            cout << "Enter the no of terms: ";
            cin >> k;
  int result = sum(k);
  cout << result;
  return 0;
}