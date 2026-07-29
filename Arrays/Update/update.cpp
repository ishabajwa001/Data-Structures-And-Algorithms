#include <iostream>
using namespace std;

int main(){
    // Initialize linear array LA
    int LA[6]{1,2,3,4,5,6};

    // Index to update
    int LOC{4};

    // New value
    int VALUE{9};

    // Update the element at index LOC 
    LA[LOC] = VALUE;

    //Exit
    return 0;
}

/*
Before:
Index:   0  1  2  3  4  5
Value:   1  2  3  4  5  6

Operation:
LA[LOC] = VALUE
LOC = 4
VALUE = 9

After:
Index:   0  1  2  3  4  5
Value:   1  2  3  4  9  6
*/