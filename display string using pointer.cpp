// Name: Divneev Singh
// PRN: 24070123043
// Batch: EnTc A2

#include <iostream>
using namespace std;

int main() {
    char str[] = "Hi world";
    char* pStr = str;
    
    while (*pStr != '\0') {
        cout << *pStr;
        pStr++;
    }

    return 0;
}

/*
OUTPUT -->

Hi world

*/
