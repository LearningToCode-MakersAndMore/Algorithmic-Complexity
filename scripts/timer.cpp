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
//   int duration =  duration_cast<microseconds>(stop-start).count();
//   return duration;
// }

template<typename T0>
using MethodPtr = void (T0::*)();

template<typename T1>
void testFunc(T1 object, MethodPtr<T1> method ) {
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
  testFunc(bob, &string::clear);

  // string bob = "hello";
  // // typedef void (string::*MethodPtr)();
  // using MethodPtr = void (string::*)();
  // MethodPtr method = &string::clear;
  // (bob.*method)();
  // cout << bob;

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
  // string bob = "hello";
  // // typedef void (string::*MethodPtr)();
  // using MethodPtr = void (string::*)();
  // MethodPtr method = &string::clear;
  // (bob.*method)();
  // cout << bob;
  // cout << method;
  // (bob->*method)();
  // void (string::*method)() = &string::clear;
  // // int method = &string::clear;
  // bob.*method;
  // cout << bob;
  // cout << bob;
  // testFunc(bob, method);
}
