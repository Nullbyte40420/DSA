#include <iostream>
using namespace std;

int main(){
    int arr[]={72,3,4,5,6,4,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i =0;i<n;i++){
        count+=arr[i];
    }
    cout<< count << endl;

}