#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

int main() {
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    int swaps;
    int counter = 0;
   
    cin >> swaps;
    while(swaps > 0) {
        int a, b, g;
        cin >> a >> b >> g;

        if (g != a && g != b) {
            continue; // skipped, the guess isn't one of them
        }
        swap(a,b);
        if(g == b) {
            counter++;
        }
        // Scenario 2
        swaps --;
    }
    cout << counter;
}