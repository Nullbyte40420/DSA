#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec(rowIndex+1);
        vec[0].push_back(1);
        for (int i = 1; i < rowIndex+1; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0)
                    vec[i].push_back(vec[i - 1][0]);
                else if (j == i)
                    vec[i].push_back(vec[i - 1][i - 1]);
                else
                    vec[i].push_back(vec[i - 1][j - 1] + vec[i - 1][j]);
            }
        }
        return vec[rowIndex];
        
    }
};
int main(){
        Solution s;
    int n;

    cout << "Enter row index (0-based): ";
    cin >> n;

    vector<int> result = s.getRow(n);

    cout << "Row " << n << " of Pascal's Triangle: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}