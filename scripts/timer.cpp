#include<iostream>
#include<vector>
#include<chrono>
#include<string>
using namespace std;
using namespace std::chrono;

// template<typename T0>
// int timer(T0 func) {
//   auto start = high_resolution_clock::now();
//   func();
//   auto stop = high_resolution_clock::now();
//   int duration = duration_cast<microseconds>(stop-start).count();
//   return duration;
// }

template<typename R0, typename T0>
using MethodPtr = R0 (T0::*)();

template<typename T1, typename R1>
void testFunc(T1 object, R1, MethodPtr<R1, T1> method ) {
  auto start = high_resolution_clock::now();
  cout << object;
  (object.*method)();
  cout << object;
  auto stop = high_resolution_clock::now();
  int duration =  duration_cast<microseconds>(stop-start).count();
  cout << duration;
}

int foo() {
  cout << "hello";
  return 2;
}

int main() {
  string bob = "hello";
  // decltype(bob.size()) x;
  auto x = &bob.size;
  // cout << typeid(x).name();
  // using Test = int (string::*)();
  // Test abc = &string::size;
  // cout << (bob.*abc)();
  testFunc(bob, x, &string::size);
}
