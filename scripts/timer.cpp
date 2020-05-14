#include<iostream>
#include<vector>
using namespace std;

template<typename T0, typename T1=vector<int> >
void timer(T0 func, T1 arg = *(new vector<int>))
{

  *func << arg[0];

}

int main() {
  timer(&cout);
}
