#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,2,3,4,3,4,4,3,3,344,3,3,6};
    int minimum=arr[0],n=sizeof(arr)/sizeof(arr[0]);
    for(int i = 1;i<n;i++){
        minimum=min(minimum,arr[i]);
    }
    cout << minimum;
}