#include <iostream>
using namespace std;

void lightYearConv();

int main() {
    lightYearConv();
}

void lightYearConv() {
    double lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;

    cout << lightYear << " light years = " 
         << lightYear * 63240 << " astronomical units."
         << endl; 
}