#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int>& A, vector<int>& B, vector<int>& C) {
    map<int, int> mp;  // Using the correct variable name "mp"

    // Marking elements from array A
    for(int ele : A) {
        mp[ele] = 1;
    }

    // Updating map for elements in array B
    for(int ele : B) {
        if(mp.find(ele) != mp.end() && mp[ele] == 1) {
            mp[ele] = 2;
        }
    }

    // Updating map for elements in array C
    for(int ele : C) {
        if(mp.find(ele) != mp.end() && mp[ele] == 2) {
            mp[ele] = 3;
        }
    }

    vector<int> commonElements;  // Corrected the vector type to "int"
    for(auto ele : mp) {
        if(ele.second == 3) {
            commonElements.push_back(ele.first);
        }
    }

    return commonElements;
}

int main() {
    vector<int> A = {1, 5, 10, 20, 30};
    vector<int> B = {5, 13, 15, 20};
    vector<int> C = {5, 20};

    vector<int> ans = commonElements(A, B, C);

    cout << "Common Elements: " << endl;

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
