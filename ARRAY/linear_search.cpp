#include <iostream>
using namespace std;

int main(){
    int arr[]={72,3,4,5,6,4,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout << "Enter an element: ";
    cin >> x;
    int flag = 1,possition;
    for(int i =0;i<n;i++){
        if (arr[i]==x){
            flag=1;
            possition=i;
            break;
        }
    }
    if(flag==1){
         cout << x << " is in " << possition+1 << " possition";
    }
    else{
        cout<< "element not find";
    }

}