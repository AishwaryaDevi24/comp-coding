#include <iostream>
#include <vector>

using namespace std;

// for(int i = 0; i < arr.size(); i++) {
// }

// vector<int> squareSortedArr(vector<int>& arr) {
//     vector<int> result;
//     for(int i = 0; i < arr.size(); i++) {
//         result.push_back(arr[i]*arr[i]);
//     }
//     sort(result.begin(), result.end());
//     return result;
// }

//O(N) SOLUTION
vector<int> squareSortedArr(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    int left {0};
    int right {n - 1};
    int leftSquare;
    int rightSquare;
    int highestIdx = n - 1;
    while(left <= right) {
        leftSquare = arr[left] * arr[left];
        rightSquare = arr[right] * arr[right];
        if(leftSquare > rightSquare) {
            result[highestIdx--] = leftSquare;
            left++;
        } else {
            result[highestIdx--] = rightSquare;
            right--;
        }
    }
    // for(auto num : result) {
    //     cout << num << endl;
    // }
    return result;
}

int main() {
    vector<int> v {-2, -1, 0, 2, 3};
    vector<int> res = squareSortedArr(v);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    v = {-3, -1, 0, 1, 2};
    res = squareSortedArr(v);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}