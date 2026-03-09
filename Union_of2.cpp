#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       set<int> combined;
        
        for (int num : nums1) combined.insert(num);
        for (int num : nums2) combined.insert(num);
        
        return vector<int>(combined.begin(), combined.end());
    }
};

int main() {
    int n1, n2;

    cout << "Enter the size and elements of the first vector: ";
    cin >> n1;
    vector<int> arr1(n1);
    for(int i=0; i<n1; i++) cin >> arr1[i]; 

    cout << "Enter the size and elements of the second vector: ";
    cin >> n2;
    vector<int> arr2(n2);
    for(int i=0; i<n2; i++) cin >> arr2[i]; 

    Solution sol;
    vector<int> res = sol.unionArray(arr1, arr2);

    cout << "Union: ";
    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}