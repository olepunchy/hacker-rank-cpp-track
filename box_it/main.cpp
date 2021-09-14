#include <algorithm>
#include <iostream>

using namespace std;

class Box {
    private:
    long _length = 0, _height = 0, _breadth = 0;

    public:
    Box() : _length(0), _height(0), _breadth(0) {}
    Box(int length, int height, int breadth)
        : _length(length), _height(height), _breadth(breadth) {}
    Box(const Box &box)
        : _length(box._length), _height(box._height), _breadth(box._breadth) {}

    [[nodiscard]] long long CalculateVolume() const {
        long long result = _length * _height * _breadth;
        return result;
    }

    friend bool operator<(const Box &first, const Box &second) {
        if ((first._length < second._length) ||
            (first._length == second._length &&
             first._breadth < second._breadth) ||
            (first._length == second._length &&
             first._breadth == second._breadth &&
             first._height < second._height)) {
            return true;
        } else {
            return false;
        }
    }

    friend ostream &operator<<(ostream &out, Box &box) {
        out << box._length << " " << box._height << " " << box._breadth;
        return out;
    }
};

void check() {
    int n;
    cin >> n;
    Box temp;

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            cout << "Output: " << temp << endl;
        }

        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;

            cout << "Output: " << temp << endl;
        }

        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);

            if (NewBox < temp) {
                cout << "Output: Lesser\n";
            } else {
                cout << "Output: Greater\n";
            }
        }

        if (type == 4) {
            cout << "Output: " << temp.CalculateVolume() << endl;
        }

        if (type == 5) {
            Box NewBox(temp);

            cout << "Output: " << NewBox << endl;
        }
    }
}

int main() { check(); }
