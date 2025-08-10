#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
    string input;
    int currentIndex = 1;
    int max = 1;
    cin >> input;
    char currentChar = input[0];
    for(int i = 1; i < input.length(); i ++) {
        if (currentChar == input[i]) {
            currentIndex ++;
        }
        else {
            currentIndex = 1;
            currentChar = input[i];
        }
        if(currentIndex > max) {
            max = currentIndex;
        }
    }
   
    cout << max;
 
}