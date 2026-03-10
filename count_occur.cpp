#include<iostream>
#include<vector>


using namespace std;

class Solution{
    public:
    int findFirst(const vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1; // Look further left
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }

    int findLast(const vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1; // Look further right
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }

    int searchOccurences(const vector<int>& arr, int target){
        int first = findFirst(arr, target);
        if (first == -1) return 0;

        int last = findLast(arr, target);

        int count = last - first + 1;
        return count;
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
    int target;
    cout << "Enter target: ";
    cin >> target;

    cout << "Occurence: " << sol.searchOccurences(arr, target) << endl;
    return 0;
}