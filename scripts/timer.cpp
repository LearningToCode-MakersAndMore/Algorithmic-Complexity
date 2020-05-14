#include<iostream>
#include<vector>
using namespace std;

template<typename T0, typename T1=int>
void timer(T0 func, T1 arg=0)
{

  *func << arg;

}

int main() {
  timer(&cout);
}
