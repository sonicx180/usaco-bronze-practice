#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> nums = {};
    long long increments = 0;

    for(int i = 0; i < n; i ++) {
        long long a;
        cin >> a;
        nums.push_back(a);
    }

    for(long long i = 1; i < nums.size(); i ++) {
        if (nums[i] < nums[i-1]) {
            increments += nums[i-1] - nums[i];
            nums[i] = nums[i-1];
        }
    }
    cout << increments;


}