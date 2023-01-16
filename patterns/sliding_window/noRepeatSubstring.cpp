#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// int longestNoRepeatSubstr(const string& str) {
//     unordered_map<char,int> char_map;
//     int windowStart = 0, maxLen = 0;
//     for(int windowEnd = 0; windowEnd < str.length(); windowEnd++) {
//         char_map[str[windowEnd]]++;
//         while(char_map[str[windowEnd]] == 2)  {
//             char_map[str[windowStart]]--;
//             windowStart++;
//         }
//         maxLen = max(maxLen, windowEnd - windowStart + 1);
//     }
//     return maxLen;
// }

int longestNoRepeatSubstr(const string& str) {
    unordered_map<char,int> charIndexMap;
    int windowStart = 0, maxLen = 0;

    for(int windowEnd = 0; windowEnd < str.length(); windowEnd++) {
        char rightChar = str[windowEnd];

        if(charIndexMap.find(rightChar) != charIndexMap.end()) { //if found
            windowStart = max(windowStart, charIndexMap[rightChar] + 1);
            // windowStart++;
        }
        charIndexMap[rightChar] = windowEnd;
        maxLen = max(maxLen, windowEnd - windowStart + 1);
    }
    return maxLen;
}

int main() {
    const string str1 = "abccde";
    int maxLen = longestNoRepeatSubstr(str1);
    cout << maxLen << endl;
    const string str2 = "abbbb";
    maxLen = longestNoRepeatSubstr(str2);
    cout << maxLen << endl;
    const string str3 = "aabccbb";
    maxLen = longestNoRepeatSubstr(str3);
    cout << maxLen << endl;
    return 0;
}