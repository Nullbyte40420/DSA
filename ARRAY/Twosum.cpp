# include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> nums={2,7,11,15};
    int target =9;
        unordered_map<int,int> mp;
        vector<int> num;
        for (int i=0;i<nums.size();i++)
        {
            int needed = target - nums[i];
            if(mp.find(needed)!=mp.end())
            {
                num.push_back(mp[needed]);
                num.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
            for(int i=0 ; i<num.size();i++)
            {
                cout<<num[i];
            }
    }
