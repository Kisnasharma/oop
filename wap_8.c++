/*
Write a program that inputs a line of text, tokenizes the line with function strtok and outputs the tokens
in reverse order. (e.g. for input “Hello dear students” output will be “students” “dear” “Hello”)
*/
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void strtok(const char* input) {
    // Tokenize the input string
    char* token;
    char* str = strdup(input); // Duplicate the input string to avoid modifying the original
    vector<string> tokens;

    // Use strtok to split the string by spaces
    token = strtok(str, " ");
    while (token != nullptr) {
        tokens.push_back(token); // Store each token in a vector
        token = strtok(nullptr, " ");
    }

    // Output the tokens in reverse order
    for (int i = tokens.size() - 1; i >= 0; --i) {
        cout << tokens[i] << " ";
    }
    cout << endl;

    free(str); // Free the duplicated string
}

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input); // Read a full line of input
    strtok(input.c_str()); // Call the function with the input
    return 0;
}