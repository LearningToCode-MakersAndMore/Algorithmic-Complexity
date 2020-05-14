#include<iostream>
#include<vector>
using namespace std;

template<typename T0, typename T1>
void timer(T0 func, T1 arg)
{

  *func << arg;

}

int main() {
  timer(&cout, 0);
}
