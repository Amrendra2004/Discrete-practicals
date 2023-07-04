#include <iostream>
#include <set>
#include <vector>

using namespace std;

class MySet {
private:
    set<int> elements;

public:
    void addElements(const vector<int>& elementsToAdd) {
        for (int element : elementsToAdd) {
            elements.insert(element);
        }
    }

    bool checkElement(int element) {
        return elements.find(element) != elements.end();
    }
};

int main() {
    MySet mySet;
    vector<int> elementsToAdd = {10, 20, 30, 40, 50};
    mySet.addElements(elementsToAdd);

    int a;
    cout <<"Enter element to check:-";
    cin >> a;
    cout << a << (mySet.checkElement(a) ? " is a element of set" : " is not a element of set!") << endl;

    return 0;
}
