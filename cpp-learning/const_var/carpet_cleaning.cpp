#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Carpet Cleaning Service!" << endl;
    int small_rooms {0};
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const double tax {0.06} ;
    const int valid_days {30};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;
    int large_rooms {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    cout << "\nEstimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms<<endl;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    int cost = small_rooms * price_small_room + large_rooms * price_large_room;
    cout << "Cost: $" <<cost <<endl;
    float total_tax = tax * cost;
    cout << "Tax: $" << total_tax << endl;
    cout << "=================================" << endl;
    cout << "Total estimate: $" << cost + total_tax <<endl;
    cout << "This estimate is valid for " << valid_days << " days\n";
    return 0;
}