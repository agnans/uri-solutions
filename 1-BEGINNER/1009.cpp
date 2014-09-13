#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char name[30];
    double salary, valueSold;

    cin >> name >> salary >> valueSold;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary + (0.15*valueSold) << endl;
}
