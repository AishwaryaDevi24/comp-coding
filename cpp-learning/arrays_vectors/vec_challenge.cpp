#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector <int> v1;
    vector <int> v2;
    v1.push_back(10);
    v1.push_back(20);
    cout << v1.at(0) << endl;
    cout << v1.at(1) << endl;
    cout << v1.size() << endl;

    v2.push_back(100);
    v2.push_back(200);
    cout << v2.at(0) << endl;
    cout << v2.at(1) << endl;
    cout << v2.size() << endl;

    vector <vector <int> > vector_2d;

    vector_2d.push_back(v1);
    vector_2d.push_back(v2);

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    v1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << v1.at(0) << endl;
    cout << v1.at(1) << endl;

    int num1 {100};
    int num2 {20};

    num1 = num2 = 10000;

    cout << num1 << num2 << endl;
    
    return 0;
}