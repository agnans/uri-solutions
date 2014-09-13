#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double R, PI = 3.14159;

    cin >> R;
    cout << fixed << setprecision(4);
    cout << "A=" << R*R*PI << endl;
}
