#include <iosteam>
using namespace std;
int main() {
    int x;
    cin >> x;
    if(x > 0) cout <<"Додатне";
    else if (x < 0) cout << "Від ємне";
    else cout <<"Нуль";
}