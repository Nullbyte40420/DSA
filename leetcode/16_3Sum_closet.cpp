// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main(){
//     vector<int> nums;
//     nums={-8,-6,-3,-1};
//     int target = -10;
//     int sum1=0;
//     int sum2=0;
//     int minimum_distance1=INT_MAX;
//     int minimum_distance_2=INT_MAX;
//     int dis=0,dis1=0;
//     for(int i=0;i<nums.size()-2;i++)
//     {
//         for(int k=i+1;k<nums.size()-1;k++)
//         {
//             sum1=nums[i]+nums[k];
//             cout<< "i:"<<i<<" "<<"k:"<<k<<" "<<"sum1:"<<sum1<<endl;
//             int  distance=target-sum1;
//             if(distance<0) distance=-distance;
//             if(distance<minimum_distance1) {
//                 minimum_distance1=distance;
//                 dis1=sum1;}
            
//         }
//         //cout<<minimum_distance1;
//         for(int k=i+2;k<nums.size();k++)
//         {
//             sum2= dis1 + nums[k];
//             int distance = target-sum2;
//             if(distance<0) distance=-distance;
//            // cout<< distance<<endl;
//             if(distance<minimum_distance_2){
//                  minimum_distance_2=distance;
//                  dis=sum2;}
//            // cout<<sum2<<" "<<endl;

//         }
//         cout<< "step"<<i<<" "<<"sum1:"<<dis1<<" "<<"minimum_distance1:"<<minimum_distance1<<" "<<"sum2:"<<dis<<" "<<"minimum_distance2:"<<minimum_distance_2<<endl;
//     }
//     cout<< dis;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {-8,-6,-3,-1};
    int target = -10;

    // Sort required for two-pointer logic
    sort(nums.begin(), nums.end());

    int closestSum = nums[0] + nums[1] + nums[2]; // initialize with any triplet

    for(int i = 0; i < nums.size() - 2; i++)
    {
        int left = i + 1;
        int right = nums.size() - 1;

        // Instead of finding best pair first, find pair + third together
        while(left < right)
        {
            int currentSum = nums[i] + nums[left] + nums[right];

            // If this is closer than the best one we have, update it
            if(abs(currentSum - target) < abs(closestSum - target))
                closestSum = currentSum;

            // Move pointers to get closer to target
            if(currentSum < target)
                left++;
            else
                right--;
        }
    }

    cout << "Closest Sum = " << closestSum << endl;
}