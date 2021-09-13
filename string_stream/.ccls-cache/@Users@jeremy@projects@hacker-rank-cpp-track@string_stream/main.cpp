#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<int> parseInts(string str) {

  vector<int> result;

  stringstream stringStream(str);

  char delimiter;

  int delimiterCount = count(begin(str), end(str), delimiter);

  for (int index = 1; index < delimiterCount; index++) {
    int number;
    stringStream >> number >> delimiter;
  }

  return result;
}

int main() {

  string input = "23,4,56";

  vector<int> result = parseInts(input);

  for (int index = 0; index < result.size(); index++) {
    cout << result[index] << "\n";
  }

  return 0;
}
