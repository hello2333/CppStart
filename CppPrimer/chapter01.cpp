#include <iostream>

void lightYearConv();
void printNum();

int main() {
    printNum();
}

void lightYearConv() {
    using namespace std;

    double lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;

    cout << lightYear << " light years = " 
         << lightYear * 63240 << " astronomical units."
         << endl; 
}

void printNum() {
    using namespace std;

    double start = 0, end = 0;
    cout << "Print two numbers:";
    cin >> start >> end;
    if (start > end) {
        double temp = start;
        start = end;
        end = temp;
    }

    while(start <= end) {
        cout << start ++ << " ";
    }

    cout << endl;
}

void errTypePrint() {
    //chapter01.cpp:42:48: error: expected ';' after expression
    std::cout << "Read each file." << std::endl:

    /*
    * chapter01.cpp:45:18: error: use of undeclared identifier 'Update'
    * chapter01.cpp:45:18: error: use of undeclared identifier 'Master'
    * chapter01.cpp:45:33: error: expected unqualified-id
    */
    std::cout << Update master. << std::endl;

    /**
     * chapter01.cpp:52:38: error: reference to overloaded function could not be resolved; did you mean to call it?
     * std::cout << "Write new master." std::endl
                                            ^~~~~~~~~
     * /Library/Developer/CommandLineTools/usr/include/c++/v1/ostream:999:1: note: 
     * possible target for call
     * endl(basic_ostream<_CharT, _Traits>& __os)
     */
    std::cout << "Write new master." std::endl
}