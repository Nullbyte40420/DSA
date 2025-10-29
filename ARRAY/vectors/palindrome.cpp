# include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
int num=121;
int rev=0;
while(num>0){
int digit = num%10;
rev=rev*10+digit;
num/=10;}
cout << rev;

    }