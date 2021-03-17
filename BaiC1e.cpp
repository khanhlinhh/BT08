#include <iostream>

using namespace std;

void truncate (char a[], int n) {
    int i = 0;
    while (*(a+i) != '\0') {
        i++;
    }
    if (n >= i) return;
    else {
        int b = i-n;
        *(a+n) = '\0';
    }
}

int main () {
    char *a;
    int l;
    cin >> l;
    a = new char [l];
    for (int i = 0; i < l; i++) {
        cin >> *(a+i);
    }
    int n; cin >> n;
    truncate (a, n);
    for (int i = 0; i < n; i++) {
        cout << *(a+i);
    }
    cout << endl;
    delete[] a;
    return 0;
}