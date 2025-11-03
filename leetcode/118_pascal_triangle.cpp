#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vec(5);
    int num = 5;
    vec[0].push_back(1);
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                vec[i].push_back(vec[i - 1][0]);//in every new row first element will same previous row first element
            else if (j == i)
                vec[i].push_back(vec[i - 1][i - 1]);// in every row last element willsame as previous row last element
            else
                vec[i].push_back(vec[i - 1][j - 1] + vec[i - 1][j]); // except first and last element every element will be sum of previous row two element according to their possitions
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
