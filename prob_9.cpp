#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, size, column, index, value;
    cin>> n >> q;
    vector<vector<int>> VecOut;
    for(int i = 0; i < n; i++) {
        vector<int> VecIn;
        cin>> size;
        for(int j = 0; j < size; j++) {
            cin>>value;
            VecIn.push_back(value);
        }
        VecOut.push_back(VecIn);
    }
    for(int i = 0; i < q; i++) {
        cin>>column>>index;
        cout<<VecOut[column][index]<<endl;
    }
    return 0;
}
