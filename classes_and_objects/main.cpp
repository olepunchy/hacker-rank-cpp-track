#include <iostream>
#include <vector>

using namespace std;

class Student {
private:
    vector<int> _scores;
    int total;
    const int numberOfScores = 5;

public:
    Student() : total(0) {}

    int calculateTotalScore() { return total; }

    void input() {
        for (int index = 0; index < numberOfScores; index++) {
            string input;
            cin >> input;
            int score = stoi(input);
            _scores.push_back(score);
            total += score;
        }
    }

};

int main() {
    int n; // number of students
    cin >> n;
    auto *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}