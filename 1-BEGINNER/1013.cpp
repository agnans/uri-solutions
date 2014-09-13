#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    int maiorAB = (a+b+abs(a-b))/2;
    cout << (maiorAB+c+abs(maiorAB-c))/2 << " eh o maior" << endl;
}
