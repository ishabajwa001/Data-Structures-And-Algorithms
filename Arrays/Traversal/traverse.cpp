#include <iostream>
using namespace std;

int main(){

    //Initialize Array  LA
    int LA[5]{1,2,3,4,5};

    //Initialize Counter
    int LB = 0;
    int UB = 4;
    int K = LB;

    //Repeat steps while k < = UB
    while (K <= UB){
        // Visit element
        cout<<LA[K]<<endl;
        // Increase Counter
        K = K + 1;
    } 
    //Exit
    return 0;
}