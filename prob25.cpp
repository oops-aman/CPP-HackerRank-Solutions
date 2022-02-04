#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template<class T> class AddElements {
    
    public:
        T element;
        AddElements(T arg) {element = arg;}
        T add(T val) {
            return val + element;
        }
};

template<> class AddElements<string> {
    
    public:
        string element;
        AddElements(string arg) {element = arg; }
        string concatenate(string str) {
            return element + str;
        }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main () {