#include <iostream>
#include <vector>
#include <set>

using namespace std;

int removeDuplicates(vector<int>& arr) {
    // set<int> newArr;

    // for(int i = 0; i < arr.size(); i++) {
    //     newArr.insert(arr[i]);
    // }
    // return newArr.size();
   int nextNonDuplicate = 1;
   for (int i = 1; i < arr.size(); i++) {
       if(arr[nextNonDuplicate - 1] != arr[i]) {
           arr[nextNonDuplicate] = arr[i];
           nextNonDuplicate++;
       }
   }
   return nextNonDuplicate;
}

int main() {
    vector<int> v {2, 3, 3, 3, 6, 9, 9};
    int res = removeDuplicates(v);
    cout << res << endl;
    v = {2, 2, 2, 11};
    res = removeDuplicates(v);
    cout << res << endl;
    return 0;
}