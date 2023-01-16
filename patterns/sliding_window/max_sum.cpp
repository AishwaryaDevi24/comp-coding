#include <iostream>
#include <vector>

using namespace std;

int maxSumSubArray(int k, vector<int>& arr) {
    int maxSum = 0;
    int currSum = 0;
    int windowStart = 0;

    for(int windowEnd=0; windowEnd < arr.size(); windowEnd++) {
        currSum += arr[windowEnd];

        if(windowEnd >= k - 1) {
            // maxSum = currSum > maxSum ? currSum : maxSum;
            maxSum = max(currSum, maxSum);
            currSum -= arr[windowStart];
            windowStart++;
        }
    }
    return maxSum;
}

int main() {
    vector<int> v1 {2, 1, 5, 1, 3, 2};
    vector<int> v2 {2, 3, 4, 1, 5};
    int max = maxSumSubArray(2, v2);
    cout << max << endl;
    return 0;
}