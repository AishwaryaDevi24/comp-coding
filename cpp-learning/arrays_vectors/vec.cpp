#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector <int> v1(10);
    cout << v1[0] << endl;

    vector <int> scores (3, 100);
    cout << scores.at(0) <<endl;
    scores.push_back(90);
    cout << scores.at(3) << endl;
    cout << scores.size() << endl;

    vector<int> vec_arr[50]; //this is an array of 50 vectors!!! - square brackets
    vector <vector<int> > ratings {
        {1, 2, 3},
        {10, 100, 200}
    };
    ratings.at(0).at(1) = 5;
    cout << ratings.at(0).at(1) << endl;

    vector <int> vec {10, 20, 30, 40, 50};
    vec.at(0) = 100;
    vec.at(vec.size() - 1) = 1000;


    return 0;
} 