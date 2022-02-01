#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num, n;
    vector<int> arr;
    cin >> n;
    while(cin >> num)arr.push_back(num);
    sort(arr.begin(), arr.end());
    for(auto x: arr) {
        cout << x << " ";
     }
    
    return 0;
}
