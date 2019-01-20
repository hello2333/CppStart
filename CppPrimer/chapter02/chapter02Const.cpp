#include <iostream>
#include "chapter02Header2.h"
using namespace std;

void printSep();
void constPointer();
void autoType();
void amazingTypeDef();
extern const int constValueExtern;
//const int notExternConstValue;  不需要这一句

int main () {
    cout << "constValueExtern in header: " << constValueExtern << endl; // why??
    cout << "notExternConstValue in header: " << notExternConstValue << endl; // why??

    constPointer();
    autoType();
    amazingTypeDef();

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

typedef char *pchar;
void typeAlias() {
    const pchar constpOfChar = 0;
    const char * pOfConstChar = 0;
    char mychar = 'a';
    //constpOfChar = &mychar;  wrong
    pOfConstChar = &mychar;
}

void autoType() {
    const int i = 3;
    auto j = i;
    const auto &k = i;      //???
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    int num = 9;
    j = 7;          //我以为这个赋值也错误，但实际是正确的；因为j只是int型，而不是int型常量；
    //k = 7;        // k is a const int, cannot be assigned to another value;
    //*p = 7;       // p is a pointer refrence to a const int, cannot be assigned to another value;
    //j2 = 7;       //cannot assign to variable 'j2' with const-qualified type 'const int'
}

void amazingTypeDef() {
    int i = 9, *p = &i, &r = i;
    int temp = 999;

    auto a1 = i;
    decltype(i) d1 = 2.5;
    cout << "auto a1 = " << a1 << " decltype(i) d1 = " << d1 << endl << endl;

    auto ap = p;
    decltype(p) dp = p;
    cout << "auto ap = " << *ap << " decltype(p) dp = " << *dp << endl;
    ap = &temp;
    cout << "after reassign: auto ap = " << *ap << " i = " << i << endl;
    dp = &temp;
    *dp = *dp - 1;
    cout << "after reassign: decltype(p) dp = " << *dp << " i = " << i << endl << endl;

    /**
     *  auto ar = 9 decltype(r) dr = 9
     *  after reassign: auto ar = 199 i = 9
     *  after reassign: decltype(r) dr = 198 i = 198
     *  这个运行结果说明了，auto返回的是int类型，而decltype返回的是引用类型；
     *  这个设定其实是合理的，因为auto ar = r，其实是一个赋值操作而不是一个赋类型操作，普通的int j = r也只是把r的值赋给j，
     *  j仍然是int类型，但不会变为一个引用类型；但是decltype本身就是要获取括号内表达式的类型，这和auto有本质的区别；
     */
    auto ar = r;
    decltype(r) dr = i; 
    cout << "auto ar = " << ar << " decltype(r) dr = " << dr << endl;
    ar = temp;
    cout << "after reassign: auto ar = " << ar << " i = " << i << endl;
    dr = temp - 1;
    cout << "after reassign: decltype(r) dr = " << dr << " i = " << i << endl;
    printSep();

    const int ci = 3;
    cout << "ci = " << ci << endl;
    const int *cp1 = &ci;
    const int &cr1 = ci;
    //int *cp2 = &ci;   //wrong-cannot initialize a variable of type 'int *' with an rvalue of type 'const int *'
    //int &cr2 = ci;    //wrong-binding value of type 'const int' to reference to type 'int' drops 'const' qualifier

    auto ca1 = ci;
    decltype(ci) cd1 = temp - 0.5;
    cout << "auto ca1 = " << ca1 << " decltype(ci) cd1 = " << cd1 << endl << endl;

    auto cap = cp1;
    decltype(cp1) cdp = &i;
    cout << "auto *cap = " << *cap << " decltype(dp) *cdp = " << *cdp << endl;
    //*cap = 299;  //wrong expression must be a modifable value
    //*cdp = 199;   //wrong const int*
    cap = &temp;
    cout << "after reassign: auto cap = " << *cap << " ci = " << ci << endl;
    cdp = &temp;
    //*cdp = 299;
    cout << "after reassign: decltype(dp) cdp = " << *cdp << " ci = " << ci << endl << endl;

    int m = 9; 
    const int *mp = &m;
    cout << "m = " << m << " *mp = " << *mp << endl;
    m = 10;
    //*mp = 10; wrong-expression must be a modifable value
    cout << "m = " << m << " *mp = " << *mp << endl;
}

void printSep() {
    cout << "====================================" << endl << endl;
}