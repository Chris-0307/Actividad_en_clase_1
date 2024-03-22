/*
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fib(int x) {
    if((x==1)||(x==0)) {
        return(x);
    }else {
        return(fib(x-1)+fib(x-2));
    }
}
int main() {
    int x=50, i = 0;

    auto start = high_resolution_clock::now();

    cout << "\nFibonacci Series : ";
    while (i < x) {
        cout << " " << fib(i);
        i++;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "\nTime taken: " << duration.count() << " nanoseconds" << endl;
    return 0;
}
*/