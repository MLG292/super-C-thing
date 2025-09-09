/*Mason Gross
9/9/25
Objective: Make a calculator
Extra: Used a function to make my switch statement less bulky.*/
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

void outputmath(int x, int y, string operate, int sum) { // Each switch requires this, so I made it a function.
    cout << x << " " << operate << " " << y << " is: " << sum << ".";
}

int main() {
    int x;
    int y;
    int operat;
    int sum;
    string choice;
    cout << "Enter a number: " << endl; //Starting number 1
    cin >> x;
    cout << "Enter another number:" << endl; //Starting number 2
    cin >> y;
    cout << "Enter Operator:\n1: +\n2: -\n3: *\n4: /\n5: %\n6: ++\n7: --" << endl;
    cin >> operat;
    switch(operat){ //Switch statement with all possible operators begins
    case 1: 
    sum = x + y;
    outputmath(x, y, "+", sum);
    break;
    case 2:
    sum = x - y;
    outputmath(x, y, "-", sum);
    break;
    case 3:
    sum = x * y;
    outputmath(x, y, "*", sum);
    break;
    case 4:
    sum = x / y;
    outputmath(x, y, "/", sum);
    break;
    case 5:
    sum = x % y;
    outputmath(x, y, "%", sum);
    break;
    case 6:
    cout << "Which one did you want to increment? x or y?" << endl; // Specifically made for increment
    cin >> choice; //Asks user for preference
    if(choice == "x") {
        cout << "x++: " << x + 1 << endl;
    }
    if(choice == "y") {
        cout << "y++" << y + 1 << endl;
    }
    break;
    case 7:
    cout << "Which one did you want to decrement? x or y?" << endl; //Specifically made for decrement
    cin >> choice; //Asks user for preference
    if(choice == "x") {
        cout << "x-- " << x - 1 << endl;
    }
    if(choice == "y") {
        cout << "y-- " << y - 1 << endl;
    }
    break;
    }
}