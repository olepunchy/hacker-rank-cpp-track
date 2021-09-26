#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

// Use '\n' in place of endl for performacne reasons.
// Cannot change the code in main in the original problem.
#define endl '\n';

template <class T> class AddElements {
  T element;

public:
  AddElements(T arg) { element = arg; }
  T add(T arg) { return element + arg; }
};

template <> class AddElements<string> {
  string element;

public:
  AddElements(string arg) { element = arg; }
  string concatenate(string arg) { return element + arg; }
};

// Performance workaround to speed up I/O.
// Cannot change the code in main in the original problem.
int start_up() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  return 0;
}

int static perf = start_up();

int main() {
  int n, i;
  cin >> n;

  for (i = 0; i < n; i++) {
    string type;
    cin >> type;

    if (type == "float") {
      double element1, element2;
      cin >> element1 >> element2;
      AddElements<double> myfloat(element1);
      cout << myfloat.add(element2) << endl;
    } else if (type == "int") {
      int element1, element2;
      cin >> element1 >> element2;
      AddElements<int> myint(element1);
      cout << myint.add(element2) << endl;
    } else if (type == "string") {
      string element1, element2;
      cin >> element1 >> element2;
      AddElements<string> mystring(element1);
      cout << mystring.concatenate(element2) << endl;
    }
  }

  return 0;
}
