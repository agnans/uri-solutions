#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    float c, total = 0;

    cin >> a >> b >> c;
    total += b*c;
    cin >> a >> b >> c;
    total += b*c;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
}
