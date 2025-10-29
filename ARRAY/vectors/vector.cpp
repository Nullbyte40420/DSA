#include <iostream>
#include <vector>
#include <algorithm>  // for sort(), reverse()
using namespace std;

int main() {
    // 1️⃣ Creating vectors
    vector<int> v1;                     // empty vector
    vector<int> v2(5);                  // vector with 5 elements (all 0)
    vector<int> v3(5, 100);             // vector with 5 elements, all 100
    vector<int> v4 = {10, 20, 30, 40};  // initialized list

    cout << "Initial vectors:\n";
    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    cout << "\nv3: ";
    for (int x : v3) cout << x << " ";
    cout << "\nv4: ";
    for (int x : v4) cout << x << " ";
    cout << "\n--------------------------\n";

    // 2️⃣ Adding elements using push_back()
    cout << "\nAdding elements to v1 using push_back():\n";
    for (int i = 1; i <= 5; i++) {
        v1.push_back(i * 10);
        cout << "Added " << i * 10 
             << " | Size: " << v1.size()
             << " | Capacity: " << v1.capacity() << endl;
    }

    // 3️⃣ Accessing elements
    cout << "\nAccessing elements of v1:\n";
    cout << "Using index: ";
    for (int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout << "\nUsing at(): ";
    for (int i = 0; i < v1.size(); i++) cout << v1.at(i) << " ";
    cout << "\nFront element: " << v1.front();
    cout << "\nBack element: " << v1.back() << endl;

    // 4️⃣ Inserting and Erasing
    v1.insert(v1.begin() + 2, 25);  // insert 25 at index 2
    cout << "\nAfter inserting 25 at index 2: ";
    for (int x : v1) cout << x << " ";

    v1.erase(v1.begin() + 3);       // remove element at index 3
    cout << "\nAfter erasing element at index 3: ";
    for (int x : v1) cout << x << " ";

    // 5️⃣ Removing last element
    v1.pop_back();
    cout << "\nAfter pop_back(): ";
    for (int x : v1) cout << x << " ";

    // 6️⃣ Sorting and Reversing
    sort(v1.begin(), v1.end());
    cout << "\nAfter sorting: ";
    for (int x : v1) cout << x << " ";

    reverse(v1.begin(), v1.end());
    cout << "\nAfter reversing: ";
    for (int x : v1) cout << x << " ";

    // 7️⃣ Check size, capacity, and empty
    cout << "\nSize: " << v1.size();
    cout << " | Capacity: " << v1.capacity();
    cout << " | Empty: " << (v1.empty() ? "Yes" : "No") << endl;

    // 8️⃣ Swap two vectors
    vector<int> v5 = {111, 222, 333};
    cout << "\nBefore swap:\nv1: ";
    for (int x : v1) cout << x << " ";
    cout << "\nv5: ";
    for (int x : v5) cout << x << " ";

    v1.swap(v5);

    cout << "\nAfter swap:\nv1: ";
    for (int x : v1) cout << x << " ";
    cout << "\nv5: ";
    for (int x : v5) cout << x << " ";

    // 9️⃣ Clear all elements
    v1.clear();
    cout << "\n\nAfter clear(), v1 size: " << v1.size();
    cout << " | Empty: " << (v1.empty() ? "Yes" : "No") << endl;

    cout << "\n✅ All major vector operations demonstrated successfully!\n";
    return 0;
}
