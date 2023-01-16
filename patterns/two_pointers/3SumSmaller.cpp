#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// for(int i = 0; i < nums.size(); i++) {
// }

vector<vector<int> > ThreeSumSmaller(vector<int>& nums, int target) {
    vector<vector<int> > result;
    int count {0};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int left = i + 1;
        int right = n - 1;
        int targetSum = target - nums[i];
        while(left < right) {
            int sum = nums[left] + nums[right];
            if(sum < targetSum) {
                // cout << "ELEM" << nums[i] << " " << nums[left] << " " << nums[right] << endl;
                // result.push_back(vector<int> {nums[i], nums[left], nums[right]});
                count += right - left;
                for(int j = right; j > left; j--) {
                    result.push_back(vector<int> {nums[i], nums[left], nums[j]});
                }
                left++;
                // cout << left << " " << right << endl;
            } else {
                right--;

            }
            // else if(sum >= target) {
            //     right--;
            // }
        } 

    }
    return result;

}

int main() {
    vector<int> v {-1, 0, 2, 3};
    int target = 3;
    vector<vector<int> > res = ThreeSumSmaller(v, target);
    for(auto i:res) {
        for(auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    v = {-1, 4, 2, 1, 3}; //{-1, 1, 2, 3, 4}
    target = 5;
    res = ThreeSumSmaller(v, target);
    for(auto i:res) {
        for(auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}