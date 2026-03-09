#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    vector<int> getFloorCeil(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0, high = n - 1, floor = -1, ceil = -1;
        while(low <= high){ //For finding floor
            int mid = low + (high - low)/2;
            if(nums[mid] <= target){
                floor = nums[mid];
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        low = 0, high = n - 1;
         while(low <= high){ //For finding ceil
            int mid = low + (high - low)/2;
            if(nums[mid] >= target){
                ceil = nums[mid];
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return {floor, ceil};
       
    }
};

int main(){
    int n ,k;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    cin >> k;

    Solution sol;
    vector<int> res = sol.getFloorCeil(arr, k);
    cout << "Floor: " << res[0] << " Ceil: " << res[1] << endl;
    return 0; 

}