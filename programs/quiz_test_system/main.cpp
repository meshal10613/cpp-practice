#include <iostream>
#include <cstdlib>

using namespace std;

float checkAnswer(int userAnswer, int correctAnswer, int &correct, int &wrong)
{
    if (userAnswer == correctAnswer)
    {
        cout << "\nCorrect Answer! (+1 Mark)\n";
        correct++;
        return 1.0;
    }
    else
    {
        cout << "\nWrong Answer! (-0.25 Mark)\n";
        cout << "Correct Answer: " << correctAnswer << endl;
        wrong++;
        return -0.25;
    }
}

int main()
{
    int answer;
    int correct = 0, wrong = 0;
    float score = 0.0;

    cout << "==========================================\n";
    cout << "            QUIZ TEST PROGRAM\n";
    cout << "==========================================\n";
    cout << "Total Questions : 5\n";
    cout << "Correct Answer  : +1 Mark\n";
    cout << "Wrong Answer    : -0.25 Mark\n";
    cout << "==========================================\n";

    system("pause");


    // Question 1
    system("CLS");
    cout << "Question 1: What does CPU stand for?\n\n";
    cout << "1. Central Process Unit\t\t2. Central Processing Unit\n";
    cout << "3. Computer Personal Unit\t4. Central Power Unit\n\n";
    cout << "Enter your answer: ";
    cin >> answer;

    score += checkAnswer(answer, 2, correct, wrong);
    system("pause");


    // Question 2
    system("CLS");
    cout << "Question 2: Which language is mainly used for Android development?\n\n";
    cout << "1. Java\t\t2. Python\n";
    cout << "3. PHP\t\t4. HTML\n\n";
    cout << "Enter your answer: ";
    cin >> answer;

    score += checkAnswer(answer, 1, correct, wrong);
    system("pause");


    // Question 3
    system("CLS");
    cout << "Question 3: Which symbol is used to end a statement in C++?\n\n";
    cout << "1. :\t\t2. ,\n";
    cout << "3. ;\t\t4. .\n\n";
    cout << "Enter your answer: ";
    cin >> answer;

    score += checkAnswer(answer, 3, correct, wrong);
    system("pause");


    // Question 4
    system("CLS");
    cout << "Question 4: Who developed C++?\n\n";
    cout << "1. Bill Gates\t\t2. Steve Jobs\n";
    cout << "3. James Gosling\t4. Bjarne Stroustrup\n\n";
    cout << "Enter your answer: ";
    cin >> answer;

    score += checkAnswer(answer, 4, correct, wrong);
    system("pause");


    // Question 5
    system("CLS");
    cout << "Question 5: Which statement is used for output in C++?\n\n";
    cout << "1. cin\t\t2. cout\n";
    cout << "3. scanf\t4. gets\n\n";
    cout << "Enter your answer: ";
    cin >> answer;

    score += checkAnswer(answer, 2, correct, wrong);
    system("pause");


    // Final Result
    system("CLS");

    cout << "==========================================\n";
    cout << "              QUIZ RESULT\n";
    cout << "==========================================\n";
    cout << "Total Questions : 5\n";
    cout << "Correct Answers : " << correct << endl;
    cout << "Wrong Answers   : " << wrong << endl;
    cout << "Final Score     : " << score << " / 5.00\n";
    cout << "==========================================\n";


    if (score >= 4.5)
    {
        cout << "Excellent! Outstanding Performance.\n";
    }
    else if (score >= 3.5)
    {
        cout << "Very Good! Keep It Up.\n";
    }
    else if (score >= 2.5)
    {
        cout << "Good! You Passed.\n";
    }
    else
    {
        cout << "Needs More Practice.\n";
    }


    cout << "==========================================\n";
    cout << "Thank You for Taking the Quiz!\n";
    cout << "==========================================\n";

    system("pause");

    return 0;
}
