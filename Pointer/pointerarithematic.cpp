#include <iostream>
int main()
{
  int i=10;
  int*p=&i;
  std::cout << p << '\n';
  p=p+2;
  std::cout << p << '\n';
  p=p-2;
  std::cout << p << '\n';
}
