/**
 *   @file: word-count.cc
 * @author: Alexander Vano
 *   @date: 9/27/2023
 *  @brief: Counting words and sentences
 */

 using namespace std;

 #include <iostream>
 #include <cstdlib>
 #include <iomanip>

 int main() {
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    float wordCount = 0;
    float sentenceCount = 0;
    float averageWords = 0;
    int terminate = 0;
    int length = text.length();
    char c;

    for (int i = 0; i < length; i++) {
        c = text.at(i);

        if (terminate == 3)
        break;

        if (c == ' ') {
            wordCount++;
            terminate = 0;
        } else if (c == '.' || c == '!' || c == '?') {
            sentenceCount++;
            terminate = 0;
        } else if (c == '@') {
            terminate++;
        }
    }

    averageWords = wordCount / sentenceCount;

    cout << "Word count: " << wordCount << endl;
    cout << "Sentence count: " << sentenceCount << endl;
    cout << "Average words per sentence: " << setprecision(3) << averageWords << endl;

 }



