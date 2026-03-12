#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

class Solution{
    public:
    int numberArraySorted(vector<int> &nums){
        int n = nums.size();
        int low = 0, high = n - 1, minIndex = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[low] <= nums[mid]){
                if(nums[low] < nums[minIndex]){
                    minIndex = low;
                }
                low = mid + 1;
            }
            else {
                if(nums[mid] < nums[minIndex]){
                    minIndex = mid;
                }
                high = mid - 1;
            }

        }
        return minIndex;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "The array is rotated " << sol.numberArraySorted(arr) << " times" << endl;
    return 0;
}