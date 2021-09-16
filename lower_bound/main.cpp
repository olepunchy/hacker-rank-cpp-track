#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numberOfElements, inputNumber;
    vector<int> numberVector;

    cin >> numberOfElements;

    for (int index = 0; index < numberOfElements; index++) {
        cin >> inputNumber;
        numberVector.push_back(inputNumber);
    }

    int lower, value;
    cin >> lower;
    for (int index = 0; index < lower; index++) {
        cin >> value;
        auto iter =
            lower_bound(begin(numberVector), end(numberVector), value);

        if (numberVector[iter - begin(numberVector)] == value) {
            cout << "Yes " << (iter - begin(numberVector) + 1) << "\n";
        } else {
            cout << "No " << (iter - begin(numberVector) + 1) << "\n";
        }
    }

    return 0;
}
