#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& arr, int target){
    vector<vector<int>> result;

    int n = arr.size();

    sort(arr.begin(), arr.end()); // O(n log n)

    for(int i = 0; i < n - 2; i++){ // O(n)

        int left = i + 1;
        int right = n - 1;

        while(left < right){ // O(n)

            int sum = arr[i] + arr[left] + arr[right];

            if(sum == target){
                result.push_back({arr[i], arr[left], arr[right]});

                left++;
                right--;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
    }

    return result;
}

int main(){
    vector<int> arr = {2, 7, 11, 15, 8, 5, 3, 1};
    int target = 10;

    vector<vector<int>> result = threeSum(arr, target);

    for(auto triplet : result){
        for(int num : triplet){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
