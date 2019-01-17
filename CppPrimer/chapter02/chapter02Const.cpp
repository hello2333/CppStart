#include <iostream>
#include "chapter02Header2.h"
using namespace std;

void constPointer();
extern const int constValueExtern;
//const int notExternConstValue;  不需要这一句

int main () {
    cout << "constValueExtern in header: " << constValueExtern << endl; // why??
    cout << "notExternConstValue in header: " << notExternConstValue << endl; // why??

    constPointer();

    test();
}

void constPointer() {
    const int i = 3;
    const int *p1 = &i;
    //int *p2 = &i;           // invalid
    cout << "*p1: " << *p1 << endl;

    int j = 5;
    p1 = &j;
    //*p1 = 6;                // invalid
    cout << "*p1: " << *p1 << endl;
}