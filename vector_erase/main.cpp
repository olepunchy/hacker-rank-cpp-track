#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void EraseIndexFromVector(int index, vector<int> &v) {
    v.erase(begin(v) + (index - 1));
}

void EraseRangeFromVector(int start, int end, vector<int> &v) {
    v.erase(begin(v) + (start - 1), begin(v) + (end - 1));

    cout << v.size() << "\n";

    for (auto number : v) {
        cout << number << " ";
    }
}

int main() {
    vector<int> theVector;

    int vectorSize = 0;
    cin >> vectorSize;

    for (int index = 0; index < vectorSize; index++) {
        int number = 0;
        cin >> number;
        theVector.push_back(number);
    }

    int elementToErase = 0;
    cin >> elementToErase;
    EraseIndexFromVector(elementToErase, theVector);

    int start = 0, end = 0;
    cin >> start >> end;

    EraseRangeFromVector(start, end, theVector);

    return 0;
}
