#include<iostream>
#include<vector>
#include<unordered_map>

//I did this using hashmap, but i'll try to optimize this using binary search ASAP!!


using namespace std;

class Solution{
    public:
    int singleNumber(vector<int> &nums){
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int x: nums){
            freq[x]++;
        }

        for(auto it : freq){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;


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

    cout << "Single element is : " << sol.singleNumber(arr) << endl;
    return 0;
}
