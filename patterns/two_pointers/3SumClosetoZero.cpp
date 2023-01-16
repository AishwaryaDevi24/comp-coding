#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// for(int i = 0; i < nums.size(); i++) {
// }

int ThreeSumClosestToZero(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
        int minDiff = numeric_limits<int>::max();
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - 1;

            while(left < right) {
                sum = nums[i] + nums[left] + nums[right];
                int diff = target - sum;
                if(diff == 0) {
                    return sum;
                }
                if(abs(diff) < abs(minDiff)) {
                    minDiff = diff;  
                }
                if(diff > 0) {
                    left++;
                } else {
                    right--;
                }   
        }
    }
        return target - minDiff;
}

int main() {
    vector<int> v {-2, 0, 1, 2};
    int target = 2;
    int res = ThreeSumClosestToZero(v, target);
    cout << res << endl;
    
    v = {-3, -1, 1, 2};
    target = 1;
    res = ThreeSumClosestToZero(v, target);
    cout << res << endl;
    
    v = {1, 0, 1, 1};
    target = 100;
    res = ThreeSumClosestToZero(v, target);
    cout << res << endl;
    return 0;
}