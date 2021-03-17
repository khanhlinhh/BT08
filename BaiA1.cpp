#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây 0x7ffee1d808d8
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây 0x7ffee1d808d8
   cout << &y << endl;
}

int main()
{
   f(7);
   g(11);
   return 0;
} 
// Địa chỉ 2 biến giống nhau.
// Vì cả 2 hàm đều có cùng kiểu tham số, kiểu trả về và x, y đều là biến địa phương đầu tiên của hàm.