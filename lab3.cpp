#include <iostream>
#include <string>
using namespace std;

int main() {
    string cards = "CHSD"; //Clubs hearts spades diamonds
    string* cardPtr = &cards;
    cout << "cards variable value: " << cards << endl;
    cout << "Card's variable address: " << cardPtr << endl;
    cout << "Card's pointer value: " << *cardPtr << endl;
    int size = 9;
    int listSize = 10;
    string** example = new string*[size];
    for (int i = 0; i < size; i++) {
        example[i] = new string[listSize];
        for (int j = 0; j < listSize; j++) {
            example[i][j] = to_string(i) + "," + to_string(j);
            cout << "[" << example[i][j] << "] ";
        }
        cout << endl;
    }
}
