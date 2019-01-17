#include <iostream>
//#include "chapter02Header1.h"  不能定义const变量两次
#include "chapter02Header2.h"
using namespace std;

extern const int constValueExtern = 99;
void signedWithUnsigned();
void charSize();
void intType();
void varInit();
void scopeTest();
void pointerTest();
void normalPointerTest();
void constTest();

int test() {
    signedWithUnsigned();
    charSize();
    varInit();
    scopeTest();
    normalPointerTest();
    constTest();
    pointerTest();

    return 0;
}

void signedWithUnsigned() {
    cout << "signedWithUnsigned" << endl;
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
}

void charSize() {
    cout << "charSize" << endl;

    char charArray[] = "望经长长长";
    char16_t char16[] = u"望经长长长";
    char32_t char32[] = U"望经长长长";
    wchar_t wchart[] = L"望经长长长";

    cout << "char  [] length: " << sizeof charArray / sizeof *charArray << endl;    //为什么是16呢？
    cout << "char16[] length: " << sizeof char16 / sizeof *char16 << endl;
    cout << "char32[] length: " << sizeof char32 / sizeof *char32 << endl;
    cout << "wchart[] length: " << sizeof wchart / sizeof *wchart << endl;

    cout << "char  [] size: " << sizeof charArray << endl;
    cout << "char16[] size: " << sizeof char16 << endl;
    cout << "char32[] size: " << sizeof char32 << endl;
    cout << "wchart[] size: " << sizeof wchart << endl;

    cout << "char     size: " << sizeof *charArray << endl;
    cout << "char16_t size: " << sizeof *char16 << endl;
    cout << "char32_t size: " << sizeof *char32 << endl;
    cout << "wchart   size: " << sizeof *wchart << endl;

    /*
        char  [] length: 16
        char16[] length: 6
        char32[] length: 6
        wchart[] length: 6
        char  [] size: 16
        char16[] size: 12
        char32[] size: 24
        wchart[] size: 24
        char     size: 1
        char16_t size: 2
        char32_t size: 4
        wchart   size: 4
     */
}

void intType() {
    //int month = 09;
    //cout << month << endl;
}

string global_str;
int global_int;
void varInit() {
    string local_str;
    int local_int;
    /*
    * global: [] 0
    * local:  [] 1
    */
    cout << "global: [" << global_str << "] " << global_int << endl;
    cout << "local:  [" << local_str << "] " << local_int << endl;
}

void scopeTest() {
    int i = 100, sum = 0;
    for (int i = 0; i < 10; i ++) {
        sum += i;
    }
    cout << i << " " << sum << endl;
}

void normalPointerTest() {
    int i = 3;
    int *p = &i;
    *p = *p * *p;
    cout << "*p * *p = " << i << endl;

   /*void * p1 = &i;
    int * p2 = p1;
    cout << "int *p2 = (void*) p1" */
}

void pointerTest() {
    int i = 0;
    /* int *ip = i;        //wrong 
    int *ip1 = &i;
    double * dp = &i;   //wrong */
}

void constTest() {
    cout << "constValueExtern: " << constValueExtern << endl;
    cout << "notExternConstValue in file1: " << notExternConstValue << endl;
    //cout << "constValueExtern1: " << constValueExtern1 << endl; 必须定义，不得已不能使用
}

