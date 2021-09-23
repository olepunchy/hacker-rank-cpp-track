#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    set<int> numbers;
    int queries;

    cin >> queries;

    for (int index = 0; index < queries; index++) {
        int type, input;
        cin >> type >> input;

        switch (type) {
            case 1:
                numbers.insert(input);
                break;

            case 2: {
                set<int>::iterator iter = numbers.find(input);

                if (iter != numbers.end()) {
                    numbers.erase(input);
                }
            } break;

            case 3: {
                set<int>::iterator iter = numbers.find(input);

                if (iter != numbers.end()) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            } break;
        }
    }

    return 0;
}
