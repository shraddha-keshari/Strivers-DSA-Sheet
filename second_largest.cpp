#include<iostream>
#include<vector>
#include<limits>

using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for(int x : nums) {
            if(x > largest) {
                secondLargest = largest;
                largest = x;
            } else if( x > secondLargest && x < largest) {
                secondLargest = x;
            }
        }
        return secondLargest;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Solution sol;
    cout << "Second largest element is : " << sol.secondLargestElement(arr) << endl;

    return 0;

}