#include <iostream>

using namespace std;

int lambda_test()
{
  auto func = [](){ cout << "Hello world";};
  func();
  return 0;
}
