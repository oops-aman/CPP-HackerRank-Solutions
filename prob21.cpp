#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, a, b, num;
    vector<int> vec;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }
    cin >> x;
    cin >> a >> b;
    vec.erase(vec.begin() + (x-1));
    vec.erase(vec.begin() + (a-1), vec.begin() + (b-1));
    cout << vec.size() << endl;
    for(auto x: vec) {
        cout << x << " ";
    } 
    return 0;
}
