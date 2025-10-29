#include <iostream>
using namespace std;

int main(){
    int arr[]= {2,56,4,5,6,6,57,5,4,3,2,2,32,4,4};
    int n = sizeof(arr)/sizeof(arr[0]), maximum = arr[0];
    for(int i=1;i<n;i++){
        maximum = max(maximum,arr[i]);
    }
    cout<< maximum;
}