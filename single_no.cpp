#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        unordered_map<int, int> freq;

        for(int x : nums){
            freq[x]++;
        }
// Iterate through the map to find the key with value 1
        for(auto const& [number, count] : freq) {
            if(count == 1) {
                return number; 
            }
    }
    return -1;
    }
 };



int main() {
    int n;
    cout << "Enter the size: " ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution sol;
    cout << sol.singleNumber(arr) << endl;
    return 0;
}