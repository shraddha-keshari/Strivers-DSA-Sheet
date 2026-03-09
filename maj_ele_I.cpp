#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int x : nums){
            freq[x]++;
        }

        int maxFreq = 0, result = -1;

        for(auto const& [element, count]: freq) {
            if(count > maxFreq){
                maxFreq = count;
                result = element;
            }
        }
        return result;
        
    }
};

int main() {
    int n;
    cout << "Enter the size: " ;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution sol;
    int mostFrequent = sol.majorityElement(arr);

    cout << "Majority element is: " << mostFrequent << endl;
    return 0;

}