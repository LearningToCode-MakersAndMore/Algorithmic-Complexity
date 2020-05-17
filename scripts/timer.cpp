#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
using namespace std::chrono;

template<typename T0>
double timer(T0 func) {
  auto start = high_resolution_clock::now();
  func();
  auto stop = high_resolution_clock::now();
  double duration =  duration_cast<microseconds>(stop-start).count();
  return duration;
}

int foo() {
  cout << "hello";
  return 2;
}

int main() {
  auto banana = vector::size;
  auto *bar = foo;

  double test = timer(bar);
  cout << test;
}
