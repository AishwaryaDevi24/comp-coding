#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > threeSum(vector<int>& nums) {
    int n = nums.size();
    int l = 0;
    int r = n -1;
    vector<vector<int> > result;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(i > 0 && nums[i] == nums[i-1]) {
            continue;
        }
        l = i + 1;
        r = n - 1;
        while(l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0) {
                result.push_back(vector<int> {nums[i], nums[l], nums[r]});
                l++;
                r--;
                while(l < r && nums[l] == nums[l-1]) {
                    l++;
                }
                while(l < r && nums[r] == nums[r-1]) {
                    r--;
                }
            } else if (sum > 0) {
                r--;
            } else {
                l++;
            } 
        }
        
    }
    return result;
}

int main() {
    vector<int> v {-3, 0, 1, 2, -1, 1, -2};
    vector<vector<int> > res = threeSum(v);
    for(auto val : res) {
        for(auto val2 : val) {
            cout << val2 << " ";
        }
        cout << endl;
    }
    return 0;
}