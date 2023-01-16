#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

pair<int, int> pairTargetSumMap(vector<int>& arr, int target) {
    unordered_map<int, int> indexMap;
    for(int i = 0; i < arr.size(); i++) {
        // cout << *i << " ";
        int b = target - arr[i];
        if (indexMap.find(b) != indexMap.end()) {
            return {indexMap[b], i};
        } else {
            indexMap[arr[i]] = i;
        }
    }
    return {-1, -1};
}

int main() {
    vector<int> v {1, 2, 3, 4, 6};
    int target {6};
    pair<int, int> result = pairTargetSumMap(v, target);
    cout << result.first << " " << result.second << endl;
    v = {2, 5, 9, 11};
    target = 11;
    result = pairTargetSumMap(v, target);
    cout << result.first << " " << result.second << endl;
    v = {11, 12};
    target = 1;
    result = pairTargetSumMap(v, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}