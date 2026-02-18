#include <iostream>
using namespace std;

int main() {
    string pass;
    cin >> pass;

    if (pass == "1234")
        cout << "Доступ дозволено";
    else
        cout << "Помилка";
}