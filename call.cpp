#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b;
}

void subtract(int a, int b) {
    cout << a - b;
}

void multiply(int a, int b) {
    cout << a * b;
}

void(*fun_ptr_arr[])(int, int) = {add, subtract, multiply} ;    // LINE-1


void caller(int ch, int a, int b) {

    if (ch > 2) return;
    (*fun_ptr_arr[ch])(a,b);    // LINE-2
}


int main() {

    int ch, a, b;

    cout<< "enter char value and two numbers you want to perform action with"

    cin >> ch >> a >> b;

    caller(ch, a, b);

    return 0;
}
