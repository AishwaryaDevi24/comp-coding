#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

pair <int, string> fn () {
    return {200, "success"};
}

int main() {
    cout << "Hello" << endl;
    //VECTORS
    vector<int> v1 {3, 6, 8, 9, 1, 4};
    vector<int> even;
    vector<int> odd;
    v1.push_back(7);
    v1.pop_back();
    // cout << v1.size();
    
    
    //SORTING - if we try to implement any other sorting, 
    // it will always be slower than this sort. 
    // this is a combination of insertion sort, heap sort and quick sort.
    sort(v1.begin(), v1.end(), greater<int>());
    // LOOP - WAY 1
    for(int x:v1) {
        cout << x << endl;
    }
    //LOOP - USUAL WAY
    // for(int i = 0; i < v1.size(); i++) {
    //     cout << v1[i] << " ";
    // }
    cout << endl;
    int a[] {18, 7, 20, 4};
    sort(a, a+4);
    for(int i = 0; i < 4; i++) {
        cout << a[i] <<" ";
    }


    // PAIRS
    pair <int, string> p {24, "aishu"};
    p.first = 25;
    cout << p.first << " " << p.second << endl;

    pair <int, string> p1 = fn();
    cout << p1.first << " " << p1.second << endl;

    vector <pair<int, string> > scores {{95, "Bob"}, {80, "Alice"}, {100, "Sam"}};
    sort(scores.begin(), scores.end());
    for(int j = 0; j < scores.size(); j++) {
        cout << scores[j].first << " " << scores[j].second << endl;
    }

    
    //SET
    // set - sorted, unique values
    //set iterators can increment only one by one
    // set.end() is nonexistent 
    set<int> s {1, 2};
    s.insert(5);
    s.insert(0);
    s.insert(5); 
    
    cout << s.count(5) << endl;
    s.erase(5);
    cout << s.count(5) << endl; 
    s.insert(5);
    // find, count, upper_bound, lower_bound return iterators
    auto it = s.lower_bound(2);
    cout << *it << endl;
    auto it1 = s.upper_bound(2);
    cout << *it1 << endl;
    s.erase(5);
    // Below two lines are same
    if(s.find(5) == s.end()) cout << "Not found ";
    if(s.count(5) == 0) cout << "Not found" << endl;
    // s.clear();
    set <int> s2 {100, 2, 90};
    cout << *s2.begin() << endl;

    
    //MAP - count frequency of various objects
    map<string, int> m;
    m["hello"] = 5;
    m["world"] = 10;

    // cout << m["hello"] << " " << m["world"] << endl;
    for(auto it=m.begin(); it != m.end(); it++) {
        cout << it -> first << " : " << it ->second << endl;
    }
    //clear, count, find, erase
    //lower_bound, upper_bound
    //*it gives {key, value}
    map <string, int> m2;
    m2["hii"] = 2;
    m2["there"] = 3;
    auto it2 = m2.find("hii");
    // pair <string, int> res = *it;
    cout << it2 -> first << it2 -> second << endl;
    cout << m2["absent"] << endl; // creates key-val if key not present. val will be 0.
    cout << m2.size() << endl;
    for(pair<string,int> p:m2) {
        cout << p.first << " " << p.second << endl;
    }
    
    //MAP - finding frequency
    map <string, int> freq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(freq[s] == 0) {
            cout << "OK" << endl;
        } else {
            cout << s << " " << freq[s];
        }
        freq[s]++;
    }

    //SET OF PAIRS - always returning the cheapest product
    set <pair <int,string> > products;
    products.insert({20, "apples"});
    products.insert({10, "grapes"});
    products.insert({15, "mints"});
    auto it_p = products.begin();
    cout << "hi " << it_p->first << " " << it_p->second << endl;
    return 0;
}
