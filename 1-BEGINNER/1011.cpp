#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int R;
    float PI = 3.14159;

    cin >> R;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << (4.0/3) * PI * (R*R*R) << endl;
}
