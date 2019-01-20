#include <iostream>
#include <vector>

using namespace std;

void vectorAddEle();
void practice3_20();
void printEnd();

void vectorTest() {
    vectorAddEle();
    practice3_20();
}

void vectorAddEle() {
    int i = 0;
    vector<int> v1;
    while (i ++ < 10) {
        v1.push_back(i);
    }

    for(auto e: v1) {
        cout << e << " ";
    }
    cout << endl;
    printEnd();
}

void constVector() {
    const vector<int> v1 {10,3};
    //v1[5] = 5;    //wrong-expression must be a modifable value
}

void practice3_20() {
    vector<int> v1 {1,13,4,7,32,56};
    int length = v1.size();
    for(int i = 0; i < length / 2; i ++) {
        cout << v1[i] + v1[length - i - 1] << " ";
    }
    cout << endl;
    printEnd();
}