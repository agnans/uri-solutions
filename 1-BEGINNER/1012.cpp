#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    float PI = 3.14159;

    cin >> A >> B >> C;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << A*C/2 << endl;
    cout << "CIRCULO: " << C*C*PI << endl;
    cout << "TRAPEZIO: " << (A+B) * (C/2) << endl;
    cout << "QUADRADO: " << B*B << endl;
    cout << "RETANGULO: " << A*B << endl;
}
