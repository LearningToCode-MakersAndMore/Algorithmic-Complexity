#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void timer(T func)
{
*func << "hello";

}

int main() {
timer(&cout);
}
