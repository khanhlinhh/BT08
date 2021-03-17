#include <iostream>
using namespace std;

/*
int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 
   return 0;
}
*/
/*
int main () {
   const int n = 4;
   double a[n] = {1.2, 3.5, 6.3, 9.8};
   for (double *dp = a; (*dp) < n ; dp++) {
      cout << (void*) dp << " : " << (*dp) << endl;
   }
   return 0;
}
*/

int main () {
   const int n = 4;
   int a[n] = {2, 4, 6, 8};
   for (int *ip = a; (*ip) < n; ip+=2) {
      cout << (void*) ip << " : " << (*ip) << endl;
   }
   return 0;
}

// c) Output trả về địa chỉ và giá trị của ô thứ 1
