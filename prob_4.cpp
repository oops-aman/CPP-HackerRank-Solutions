#include <bits/stdc++.h>

using namespace std;



int main()
{
    int num;
    cin>> num;
    if(num == 1) 
        cout<<"one";
    else if(num == 2) 
        cout<<"two";
    else if(num == 3) 
        cout<<"three";
    else if(num == 4)
        cout<<"four";
    else if(num == 5)
        cout<<"five";
    else if(num == 6)
        cout<<"six";
    else if(num == 7)
        cout<<"seven";
    else if(num == 8)
        cout<<"eight";
    else if(num == 9)
        cout<<"nine";
    else
        cout<<"Greater than 9";
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
