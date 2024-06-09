#include<iostream>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << " is at index " << i << endl;
    }

    return 0;
}
