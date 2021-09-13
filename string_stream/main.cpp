#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseInts(string str) {

  vector<int> result;

  stringstream stringStream(str);

  char delimiter = ',';

  int delimiterCount = count(begin(str), end(str), delimiter);

  for (int index = 0; index <= delimiterCount; index++) {
    int number;
    stringStream >> number >> delimiter;
    result.push_back(number);
  }

  return result;
}

int main() {

  string input = "23,4,56";

  vector<int> result = parseInts(input);

  for (int index : result) {
    cout << index << "\n";
  }

  return 0;
}
