#include <iostream>
#include <vector>

using namespace std;

int removeKeyUnsorted(vector<int>& arr, int key) {
    int nextElement = 0;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] != key) {
            arr[nextElement] = arr[i];
            nextElement++;
        }
    }
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return nextElement;

}

int main() {
    vector<int> v {3, 2, 3, 6, 3, 10, 9, 3};
    int key = 3;
    int res = removeKeyUnsorted(v, key);
    cout << res << endl;
    v = {2, 11, 2, 2, 1};
    key = 2;
    res = removeKeyUnsorted(v, key);
    cout << res << endl;
    return 0;
}