# include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,1,2};
         int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        cout<< j + 1;
    }
 
