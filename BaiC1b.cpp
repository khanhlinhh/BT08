#include <iostream>

using namespace std;

void delete_char(char a[], char c) {
    int n = 0;
    while (*(a+n) != '\0') {
        n++;
    }
    int i = 0;
    for (; i < n; i++) {
        if (*(a+i) == c) {
            for (int j = i; j < n-1; j++) {
                *(a+j) = *(a+j+1);
            }
            *(a+n-1) = '\0';
            n--;
            i=0;
        }
    }
}

int main () {
    char *a;
    char c;
    int n;
    cin >> n;
    a = new char [n];
    int count = n;
    for (int i = 0; i < n; i++) {
        cin >> *(a+i);
        if (*(a+i) == c) count--;
    }
    cin >> c;
    delete_char(a, c);
    for (int i = 0; i < count; i++) {
        cout << *(a+i);
    }
    delete[] a;
    return 0;
}