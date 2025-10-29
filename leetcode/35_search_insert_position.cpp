# include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,3,5,6};
    int target=5;
    int f = 0, l = nums.size() - 1;
    while (f <= l) {
        int m = f + (l - f) / 2; 
        if (nums[m] == target) return m;
        else if (nums[m] > target) l = m - 1;
        else f = m + 1;
    }
    return f;
}