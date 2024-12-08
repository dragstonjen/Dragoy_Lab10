#include <iostream>
#include <windows.h>
#include <regex>
#include <string>

using namespace std;

bool isValidSnakeCase(const string& str) {
    regex pattern("^[a-z]+(_[a-z]+)*$");
    return regex_match(str, pattern);
}

int main() {
    system("chcp 65001");
    string input;
    cout << "Введіть рядок для перевірки: ";
    cin >> input;

    if (isValidSnakeCase(input)) {
        cout << "Рядок є валідним ідентифікатором у стилі Snake_Case." << endl;
    } else {
        cout << "Рядок не є валідним ідентифікатором у стилі Snake_Case." << endl;
    }

    return 0;
}
