#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    vector<pair<int, int>> nums;

    // Store value and original index
    for(int i = 0; i < arr.size(); i++) {
        nums.push_back({arr[i], i});
    }

    // Sort by value
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while(left < right) {
        int sum = nums[left].first + nums[right].first;

        if(sum == target) {
            return {nums[left].second, nums[right].second};
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {};
}


int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(arr, target);

    cout << result[0] << " " << result[1];

    return 0;
}
