#include <iostream>
using namespace std;

int main(){
    int arr[]={5, 1, 2, 3, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max = INT16_MIN;
    int second_largest=INT16_MIN;
    for(int i=0;i<size;i++){
        if(max < arr[i]) 
        {
            second_largest=max;
            max=arr[i];
        }

         else if(arr[i]<max && second_largest!=max){ 
            second_largest=arr[i];
        }
    }
    cout << second_largest;
    
    // int first= INT16_MIN;
    // int second=INT16_MIN;

    //    for (int i = 0; i < size; i++) {
    //     if (arr[i] > first) {
    //         second = first;     // previous max becomes second
    //         first = arr[i];
    //     }
    //     else if (arr[i] > second && arr[i] != first) {
    //         second = arr[i];
    //     }
    // }
    // cout<< second;
}