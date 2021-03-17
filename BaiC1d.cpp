#include <iostream>

using namespace std;

void pad_left(char a[], int n) {
    int i = 0;
    while (*(a+i) != '\0') {
        i++;
    }
    for (int k = n-1; k >= n-i; k--) {
        *(a+k) = *(a+k-(n-i));
    }
    for (int k = 0; k < n-i; k++) {
        *(a+k) = ' ';
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
    if (l >= n) {
        for (int i = 0; i < l; i++) {
            cout << *(a+i);
        }
    }
    else {
        pad_left(a, n);
        for (int i = 0; i < n; i++) {
            cout << *(a+i);
        }
    }
    cout << endl;
    delete[] a;
    return 0;
}