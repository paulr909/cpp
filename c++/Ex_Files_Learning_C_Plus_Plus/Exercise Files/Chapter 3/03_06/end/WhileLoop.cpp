#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int userChoice = 1;
    while (userChoice == 1) {
        cout << "Hello welcome to my menu\n";
        cout << "Please choose one of the following options \n";
        cout << "1. continue\n";
        cout << "2. quit\n";
        cin >> userChoice;
    }

}
