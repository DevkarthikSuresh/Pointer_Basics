//Name:Devkarthik
//PRN:23070123045
//Aim: To print the address of the variable usng pointers.
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;
    cout << *aptr << endl;
    cout << aptr << endl;
    cout << &a << endl;

    return 0;
}
