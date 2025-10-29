#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums1,nums2;
    nums1={1,2,3,0,0,0};
    nums2={2,5,6};
    int m=6,n=3;
    int j=0;
    for(int i=0;i<m&&j<n;i++)
    {
         if(nums1[i]>nums2[j])
         {
            swap(nums1[i],nums2[j]);
         }
         else if(nums1[i]==0) 
         {
            swap(nums1[i],nums2[j]);
            j++;
         }
    }
    for(int i=0;i<nums1.size();i++)
    {
        cout<<nums1[i];
    }
}