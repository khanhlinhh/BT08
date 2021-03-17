#include <iostream>

using namespace std;

void trim_right(char a[]) {
    int i = 0, count = 0;
    while (*(a+i) != '\0') {
        i++;
        if (*(a+i)=='_') count++;
    }
    *(a+i-count) = '\0';
}

int main () {
    char *a;
    int l, count = 0;
    cin >> l;
    a = new char [l];
    for (int i = 0; i < l; i++) {
        cin >> *(a+i);
        if (*(a+i) == '_') count++;
    }
    if (count == 0) {
        for (int i = 0; i < l; i++) {
            cout << *(a+i);
        }
    }
    else {
        trim_right(a);
        for (int i = 0; i < l-count; i++) {
            cout << *(a+i);
        }
    }
    cout << endl;
    delete[] a;
    return 0;
}