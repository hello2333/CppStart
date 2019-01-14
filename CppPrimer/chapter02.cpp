#include <iostream>
using namespace std;

void signedWithUnsigned();
void charSize();
void intType();
void varInit();

int main() {
    signedWithUnsigned();
    charSize();
    varInit();
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