#include <iostream>
// g++ arr.cpp -std=c++17
using namespace std;

int main() {
    char vowels[5] {'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << " " << vowels[4] << endl;
    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}