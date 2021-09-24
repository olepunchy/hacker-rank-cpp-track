#include <iostream>

using namespace std;

class Rectangle {
    protected:
    int _width;
    int _height;

    public:
    void display() { cout << _width << " " << _height << "\n"; }
};

class RectangleArea : public Rectangle {
    public:
    void read_input() { cin >> _width >> _height; }

    void display() { cout << _width * _height << "\n"; }
};

int main() {
    RectangleArea r_area;

    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();

    return 0;
}
