#include <iostream>
int main()
{
  int i;
  float j;
  std::cout << "Enter the value of integer i" << '\n';
  std::cin >> i;
  std::cout << "normal "<<&i << '\n';
  int *p = &i;
  std::cout <<"Using pointer " <<p << '\n';
  std::cout << *p << '\n';
  std::cout << "Enter the value of floating point j" << '\n';
  std::cin >> j;
  float *pf=&j;
  std::cout << "normal" <<&j <<'\n';
  std::cout << "using pointer" <<pf <<'\n';
  std::cout << *pf << '\n';
  std::cout << "size of pointer " << sizeof(p) << '\n';
  std::cout << sizeof(pf) << '\n';
  std::cout << "After increamenting " << '\n';
  i++;
  std::cout << "i=" << i <<'\n';
  std::cout << p << '\n';
  std::cout << *p << '\n';
  int a=i;
  a++;
  std::cout << "a= " <<a<< '\n';
  std::cout << "pointer " << *p<< '\n';
  int *q = &a;
  std::cout << "q= " <<q <<"\t"<< *q<< '\n';
  *p=5;
  std::cout << "i= " <<*p<< '\n';
  (*p)++;
  std::cout << "i= " <<*p<< '\n';
  int *r=p;
  (*r)++;
  std::cout << "i= " <<*r<< '\n';
  std::cout << sizeof(*p) << '\n';
}
