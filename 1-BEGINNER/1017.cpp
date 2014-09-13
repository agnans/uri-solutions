#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hours, avgSpeed;

    cin >> hours >> avgSpeed;
    cout << fixed << setprecision(3);
    cout << (hours*avgSpeed)/12.0 << endl;
}
