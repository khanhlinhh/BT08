#include <iostream>
#include <string.h>
using namespace std;

void reverse (char a[]) {
    int n = 0;
    while (*(a+n) != '\0') {
        n++;
    }
    for (int i = 0; i < n/2; i++) {
        swap(a[i],a[n-i-1]);
    }
}

int main () {
    int n;
    cin >> n;
    char *a;
    a = new char [n+1];
    for (int i = 0; i < n; i++) {
        cin >> *(a+i);
    }
    reverse(a);
    for (int i = 0; i < n; i++) {
        cout << *(a+i);
    }
    delete[] a;
    return 0;
}