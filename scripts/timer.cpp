#include<iostream>
#include<vector>
#include<chrono>
#include<string>
using namespace std;
using namespace std::chrono;

template<typename T0>
int timer(T0 func) {
  auto start = high_resolution_clock::now();
  func();
  auto stop = high_resolution_clock::now();
  int duration =  duration_cast<microseconds>(stop-start).count();
  return duration;
}

template<typename T0, typename T1>
void testFunc(T0 object, T1 method ) {
  auto start = high_resolution_clock::now();
  cout << method;
  auto stop = high_resolution_clock::now();
  int duration =  duration_cast<microseconds>(stop-start).count();
  cout << duration;
}

int foo() {
  cout << "hello";
  return 2;
}

int main() {
  // int (*bar)() = cout;
  // cout << timer(foo);
  // string::size_type* (string::*method())() = string::length;
  // string (string::*test)() = &(string::length);
  // string* cat;
  // testFunc(bob, cat->length());
  // typedef void (string::*strMemPtr)();
  // strMemPtr strMem = &string::clear;
  // b= &string::length;
  // cout << b;
  string bob = "hello";
  typedef void (string::*MethodPtr)();
  MethodPtr method = &string::clear;
  (bob.*method)();
  cout << bob;
  // cout << bob;
  // testFunc(bob, method);
}
