#include <iostream>
#include <vector>

using namespace std;

// for(int i = 0; i < arr.size(); i++) {
// }

void searchPairs(vector<int> nums, int target, int i, int j, vector<vector<int> > result) {
    
}

vector<vector<int> > fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int> > result;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n - 3; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        for(int j = i + 1; j < n - 2; j++) {
        if(j > i + 1 && nums[j] == nums[j - 1]) {
            continue;
        }
        searchPairs(nums, target, i, j, result);
    }
    return result;
}

int main() {
    vector<int> v {4, 1, 2, -1, 1, -3};
    int target = 1;
    vector<vector<int> > res = fourSum(v, target);
    for(auto val : res) {
        for(auto val2 : val) {
            cout << val2 << " ";
        }
        cout << endl;
    }
    
    // v = {2, 0, -1, 1, -2, 2};
    // target = 2;
    // vector<vector<int> > res = fourSum(v, target);
    // for(auto val : res) {
    //     for(auto val2 : val) {
    //         cout << val2 << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}