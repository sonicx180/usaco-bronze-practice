#include <iostream>
#include <string>
using namespace std;

long long factorial(long long n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    cin >> n;
    long long factN = factorial(n);
    long long counter = 0;
    string sfactN = to_string(factN);
    for(long long i = sfactN.length() - 1; i > 0; i --) {
        if (sfactN[i] == '0' && sfactN[i-1] == '0') {
            counter ++;
        }
    }
    cout << counter;
}