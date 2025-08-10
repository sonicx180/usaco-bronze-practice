#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> nums = {};
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 1; i <=n; i ++) {
        if(i % 2 == 0) {
            nums.push_back(i);
        }
    }
    for (int i = 1; i <=n; i +=2) {
        nums.push_back(i);
    }
    for(int n: nums) {
        cout << n << " ";
    }
}