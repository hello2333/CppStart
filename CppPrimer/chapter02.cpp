#include <iostream>
using namespace std;

void signedWithUnsigned();
void charSize();

int main() {
    //signedWithUnsigned();
    charSize();
}

void signedWithUnsigned() {
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
    char charArray[] = "望经长长长";
    char16_t char16[] = u"望经长长长";
    char32_t char32[] = U"望经长长长";

    cout << "char  [] length: " << sizeof charArray / sizeof *charArray << endl;
    cout << "char16[] length: " << sizeof char16 / sizeof *char16 << endl;
    cout << "char32[] length: " << sizeof char32 / sizeof *char32 << endl;

    cout << "char  [] size: " << sizeof charArray << endl;
    cout << "char16[] size: " << sizeof char16 << endl;
    cout << "char32[] size: " << sizeof char32 << endl;

    cout << "char     size: " << sizeof *charArray << endl;
    cout << "char16_t size: " << sizeof *char16 << endl;
    cout << "char32_t size: " << sizeof *char32 << endl;
}