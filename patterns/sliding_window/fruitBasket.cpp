#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxFruitsInBaskets(const vector<char>& v) {
    unordered_map<char, int> freq_map;
    int windowStart = 0, maxNum = 0;
    for(int windowEnd = 0; windowEnd < v.size(); windowEnd++) {
        freq_map[v[windowEnd]]++;
        while(int(freq_map.size()) > 2) {
            freq_map[v[windowStart]]--;
            if(freq_map[v[windowStart]] == 0) freq_map.erase(v[windowStart]);
            windowStart++;
        }
        maxNum = max(maxNum, windowEnd - windowStart + 1);
    }
    return maxNum;
}

int main() {
    const vector<char> v {'A', 'B', 'C', 'B', 'B', 'C'};
    int maxFruits = maxFruitsInBaskets(v);
    cout << maxFruits << endl;
    return 0;
}