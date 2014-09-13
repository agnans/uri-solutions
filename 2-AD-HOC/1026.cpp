#include <iostream>

using namespace std;

int main() {
    unsigned long A, B;

    while (cin >> A >> B) {
        long sum = A ^ B;
        cout << sum << endl;
    }
}
