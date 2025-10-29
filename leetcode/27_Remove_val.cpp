#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {2};
    int val = 3;
    int i=0,j=nums.size()-1;
    // include last element
    while(j>=i) 
    {
        if(nums[i]==val)
        {
            if(nums[j]==val)
            {
                j--;
            }
            else{
                swap(nums[i],nums[j]);
            }
        }
        else{
            i++;
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        cout << nums[i];
    }
    cout << i;
}