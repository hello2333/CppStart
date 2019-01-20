#include <iostream>
#include <vector>
using namespace std;

void printEnd();
void iterOper();
void practice3_23();

void iterTest() {
    iterOper();
    practice3_23();
}

void iterOper() {
    vector<int> v1 {1,2,3,4,5};
    vector<int> v2 {1,2,3,4,5};
    // ==
    auto bv1 = v1.begin();
    auto bv2 = v2.begin();
    cout << "v1.begin() == v2.begin(): " << (bv1 == bv2) << endl;   //false

    auto ev1 = v1.end();
    ev1 ++;     //可能引发奇怪的错误

    const vector<int> cv = {1,2,3,4,5};
    cout << "Result of 2 * ele of a const vector:";
    for(auto it = v1.begin(); it != v1.end(); it ++) {
        *it = *it * 2;
    }
    //cv[2] = 99;
    for(auto it = v1.begin(); it != v1.end(); it ++) {
        cout << *it << " ";
    }
    for(auto it = v1.cbegin(); it != v1.cend(); it ++) {
        //*it = *it * 2; wrong
    }
    cout << endl;

    printEnd();
}

void practice3_23() {
    vector<int> v1;
    int i = 0;
    while(i ++ < 10) {
        v1.push_back(i);
    }

    for(auto it = v1.begin(); it != v1.end(); it ++) {
        *it = *it * 2;
    }
    for(auto it = v1.begin(); it != v1.end(); it ++) {
        cout << *it << " ";
    }
    cout << endl;
    printEnd();
}

