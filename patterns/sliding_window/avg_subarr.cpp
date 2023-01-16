#include <iostream>
#include <vector>

using namespace std;

vector<double> avgOfSubArray(int k, vector<int>& v) {
    vector<double> result(v.size() - k + 1);
    int windowStart = 0;
    double windowSum = 0.0;
    
    for(int windowEnd = 0; windowEnd < v.size(); windowEnd++) {
        windowSum += v[windowEnd];
        if(windowEnd >= k - 1) {
            result[windowStart] = windowSum / k;
            windowSum -= v[windowStart];
            windowStart++;
        }
    }
    return result;
}

int main() {
    vector<int> arr {1, 3, 2, 6, -1, 4, 1, 8, 2};
    vector<double> res = avgOfSubArray(5, arr);
    for(double x:res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}