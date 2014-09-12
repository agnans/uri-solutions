#include <iostream>

int main() {
    using namespace std;
    unsigned long A, B;

    while (cin >> A >> B) {
        long sum = (~A&B) | (A&~B);
        cout << sum << endl;
    }
}
