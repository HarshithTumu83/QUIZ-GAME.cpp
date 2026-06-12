#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "===== QUIZ GAME =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Chennai\n4. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is New Delhi.\n\n";
    }

    // Question 2
    cout << "2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C++.\n\n";
    }

    // Question 3
    cout << "3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 7.\n\n";
    }

    // Question 4
    cout << "4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Mars.\n\n";
    }

    // Question 5
    cout << "5. What is 10 + 20?\n";
    cout << "1. 20\n2. 25\n3. 30\n4. 40\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3) {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 30.\n\n";
    }

    cout << "===== QUIZ COMPLETED =====\n";
    cout << "Your Score: " << score << "/5\n";

    if(score == 5)
        cout << "Excellent! Perfect Score!\n";
    else if(score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}
