#include<iostream>
#include<vector>

using namespace std;

int main(){
    // Brute force approach : T.C. O(n^2)
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] == arr[j]){
    //             cout << "Duplicate element: " << arr[i] << endl;
    //         }
    //     }
    // }
    // return 0;

   // Hashing approach : T.C. O(n) and S.C. O(n)
    vector<bool> seen(n, false);
    for(int i=0; i<n; i++){
        if(seen[arr[i]]){
            cout << "Duplicate element: " << arr[i] << endl;
            break;
        }
        else {
            seen[arr[i]] = true;
        }
    }


    // Two pointer approach : T.C. O(nlogn) due to sorting
    // int p = 0, q = n-1;
    // while(p < q){
    //     if(arr[p] == arr[q]){
    //         cout << "Duplicate element: " << arr[p] << endl;
    //         break;
    //     }
    //     else if(arr[p] < arr[q]){
    //         p++;
    //     }
    //     else {
    //         q--;
    //     }
    // }
    // return 0;
}