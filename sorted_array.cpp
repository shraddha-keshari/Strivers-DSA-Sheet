#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i=0; i<nums.size()-1; i++) {
                if(nums[i] > nums[i+1]){
                    return false;
                }
			}
			return true;
        }

};

int main() {
    Solution s;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    cout << boolalpha << s.isSorted(nums) << endl;
    return 0;
}