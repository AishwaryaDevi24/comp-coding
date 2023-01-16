#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int minSubArraySum(int sum, vector<int>& arr) {
    int windowSum = 0, minLength = numeric_limits<int>::max();
    int windowStart = 0;

    for(int windowEnd = 0; windowEnd < arr.size(); windowEnd++) {
        windowSum += arr[windowEnd];
        if(windowSum >= sum) {
            minLength = min(minLength, windowEnd - windowStart + 1);
            windowSum -= arr[windowStart];
            windowStart++;
        }
    }
    return minLength == numeric_limits<int>::max() ? 0 : minLength;
}

int main() {
    vector<int> v1 {2, 1, 5, 2, 3, 2};
    int minLen = minSubArraySum(7, v1);
    cout << minLen << endl;
    return 0;
}