#include <iostream>

using namespace std;

int selfnumber(int n) {
   return n + n%10 + (n/10)%10 + (n/100)%10 + (n/1000)%10 + n/10000; 
}

int main() {
    for(int i = 1; i < 10001; i++) {
        for(int j = 1; j < i; j++) {
            if (selfnumber(j) == i)
                break;
            else if (selfnumber(j) != i && j < i-1)
                continue;
            else
                cout << i << endl;
        }
            
    }
  return 0;  
}