#include <iostream>
using namespace std;

void printEnd();
void stringInit();
void inputString();
void practice3_6();

void stringTest() {
    stringInit();
    //inputString();
    practice3_6();
}

void stringInit() {
    string s1 = "HelloWorld";
    string copyS1(s1);
    string s2 = s1;
    s1 = "Reassign";
    cout << "After reassign: s1 = " << s1 << "; copyS1 = " << copyS1  << "; s2 = " << s2 << endl;
    printEnd();
}

void inputString() {
    string s;
    cout << "Please input something: ";
    cin >> s;
    cout << "Simple: " << s << endl;

    string word;
    while(cin >> word) {
        cout << "Word: " << word << endl;
        if(word == "quit") {
            break;
        }
    }

    string line;
    while(getline(cin, line)) {
        cout << "Line: " << line << endl;
        if(line == "quit") {
            break;
        }
    }
    printEnd();
}

void practice3_6() {
    string s("Hello World");
    for(auto &c : s) {
        c = 'X';
    }
    cout << "Modified string: " << s << endl;
    printEnd();
}