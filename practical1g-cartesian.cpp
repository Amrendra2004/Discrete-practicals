#include <iostream>
#include <set>
using namespace std;
void printCartesianSet(const set<int>& S1, const set<int>& S2) {
    
    cout << "Cartesian Product Sets: " << endl;
    
    for (const auto& x : S1) {
        for (const auto& y : S2) {
            cout << x << " " << y << endl;
        }
    }
    cout << endl;
    
}   

int main() {
    
    set<int> S1 = {5,4,3,2,1};
    set<int> S2 = {4,5,6,7,8};
    
    printCartesianSet(S1,S2);
    
    return 0;
}