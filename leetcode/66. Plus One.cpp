#include <iostream>
#include <vector>
using namespace std;

vector<int>  main(){
    vector<int> digits={9};
     int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;


}