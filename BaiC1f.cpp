#include <iostream>
#include <string.h>
using namespace std;

bool is_palindrome (char a[]) {
    int n = 0;
    while (*(a+n) != '\0') {
        n++;
    }
    for (int i = 0; i < n/2; i++) {
        if (*(a+i) != *(a+n-i-1)) return false;
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    char *a;
    a = new char [n+1];
    for (int i = 0; i < n; i++) {
        cin >> *(a+i);
    }
    if (is_palindrome (a)) cout << "True" << endl;
    else cout << "False" << endl;
    delete[] a;
    return 0;
}