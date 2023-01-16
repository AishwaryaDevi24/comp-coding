#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int longestDistinctSubstring(const string& str, int k) {
    unordered_map <char, int> m;
    int windowStart = 0, maxLen = 0;
    for(int windowEnd = 0; windowEnd < str.length(); windowEnd++) {
        m[str[windowEnd]]++;
        // maxLen = max(int(m.size()), maxLen) < k ? max(int(m.size()), maxLen) : maxLen;
        // auto it = m.begin();
        while(int(m.size()) > k) {
            m[str[windowStart]]--;
            if(m[str[windowStart]] == 0) m.erase(str[windowStart]);
            windowStart++;
        }
        maxLen = max(maxLen, windowEnd - windowStart + 1);
    }
    return maxLen;
}

int main() {
    const string str = "cbbebi";
    int k = 3;
    int maxLen = longestDistinctSubstring(str, k);
    cout << maxLen << endl;
    return 0;
}


