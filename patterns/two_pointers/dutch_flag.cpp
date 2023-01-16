#include <iostream>
#include <vector>

using namespace std;

// for(int i = 0; i < arr.size(); i++) {
// }

void swap(vector<int>& arr, int i , int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void dutchFlag(vector<int>& arr) {
    int n = arr.size();
    int low {0};
    int high {n -1};
    for(int i = 0; i <= high;) {
        if(arr[i] == 0) {
            swap(arr, i, low);
            low++;
            i++;
        } else if(arr[i] == 1) {
            i++;
        } else if(arr[i] == 2) {
            swap(arr, i, high);
            high--;
        }
    }
}

int main() {
    vector<int> v1 {1, 0, 2, 1, 0};
    dutchFlag(v1);
    for(auto i:v1) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}