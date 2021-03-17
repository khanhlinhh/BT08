#include <iostream>

using namespace std;

void pad_right(char a[], int n) {
    int i = 0;
    while (*(a+i) != '\0') {
        i++;
    }
    for (int j = i; j < n; j++) {
        *(a+j) += ' ';
    }
}

int main () {
    char *a;
    int l,n;
    cin >> l;
    a = new char [l];
    for (int i = 0; i < l; i++) {
        cin >> *(a+i);
    }
    cin >> n;
    if (l == n or l > n) {
        for (int i = 0; i < l; i++) {
            cout << *(a+i);
        }
    }
    else {
        pad_right(a, n);
        for (int i = 0; i < n; i++) {
            cout << *(a+i);
        }
    }
    cout << endl;
    delete[] a;
    return 0;
} 