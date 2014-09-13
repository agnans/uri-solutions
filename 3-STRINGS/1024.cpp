#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int lines;

    while (cin >> lines) {
        while (lines > 0 ) {
            char text[1000];
            char tmp[1000];

            cin.sync();
            cin.get();
            cin.get(text, 1000);

            int len = strlen(text);

            for (int i = 0; i < len; i++) {
                char cur = text[i];

                if ((cur > 64 && cur <= 90) || (cur > 96 && cur <= 122))
                    text[i] = cur + 3;
            }

            int j = 0;
            for (int i = len - 1; i >= 0; i--) {
                tmp[j] = text[i];
                j++;
            }
            tmp[j] = '\0';

            for (int i = len/2.0; i < len; i++) {
                char cur = tmp[i];
                tmp[i] = cur - 1;
            }

            cout << tmp << endl;
            lines--;
        }
    }
}
