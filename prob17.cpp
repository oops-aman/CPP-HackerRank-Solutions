#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        int age;
        string name;
        virtual void getdata() {};
        virtual void putdata() {};
};

class Professor : public Person {
    int publications;
    static int cur_id1;
    public:
        void getdata() {
            cin>> name;
            cin>> age;
            cin>> publications;
        }
        void putdata() {
            cout<< name << " " << age << " " << publications << " " << cur_id1++ << endl;
        }
};
int Professor::cur_id1 = 1;

class Student : public Person {
    int marks[6], sum = 0;
    static int cur_id2;
    public:
        void getdata() {
            cin>> name;
            cin>> age;
            for(int i = 0; i < 6; i++) {
                cin >> marks[i];
                sum += marks[i];
            }
        }
        void putdata() {
            cout<< name << " " << age << " " << sum << " " << cur_id2++ << endl;
        }
};
int Student::cur_id2 = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
