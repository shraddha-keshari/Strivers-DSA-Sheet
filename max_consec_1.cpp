#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int currStreak = 0;
      int maxStreak = 0;

       for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 1){
            currStreak++;
            if(currStreak > maxStreak) {
                maxStreak = currStreak;
            }
        }
        else {
            currStreak = 0;
        }
       }
       return maxStreak;
      
    }
};

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution sol;
    cout << sol.findMaxConsecutiveOnes(arr) << endl;

    return 0;

}