#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int dist;
    float fuelSpent;

    cin >> dist >> fuelSpent;
    cout << fixed << setprecision(3);
    cout << dist/fuelSpent << " km/l" << endl;
}
