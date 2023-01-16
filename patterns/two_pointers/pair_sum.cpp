#include <iostream>
#include <vector>

using namespace std;

pair<int, int> pairWithTargetSum(vector <int>& arr, int target) {
    pair<int, int> res;
    int start {0};
    int end {int(arr.size()) - 1};
    int currSum {0};
    while (start < end) {
        currSum = arr[start] + arr[end];
        if (currSum > target) {
            end--;
        } else if (currSum < target) {
            start++;
        } else {
            return {start, end};
        }
    }
    return {-1, -1};

}

int main() {
    vector<int> v {1, 2, 3, 4, 6};
    int target {6};
    pair<int, int> result = pairWithTargetSum(v, target);
    cout << result.first << " " << result.second << endl;
    v = {2, 5, 9, 11};
    target = 11;
    result = pairWithTargetSum(v, target);
    cout << result.first << " " << result.second << endl;
    v = {11, 12};
    target = 1;
    result = pairWithTargetSum(v, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}