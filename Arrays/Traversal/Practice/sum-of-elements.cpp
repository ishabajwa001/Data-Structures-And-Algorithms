#include <iostream>
using namespace std;

//Take input
void takeInput(int numbers[],int size){
    for(int i = 0 ; i < size ; i++){
        cin>>numbers[i];
    }
}

//Add the numbers
int calculateSum(const int numbers[],int size){
    int sum{0};
    for(int i = 0 ; i < size ; i++){
        sum += numbers[i];
    }
    return sum;
}

// main function
int main(){

    int numbers[6]{};
    int size{sizeof(numbers)/sizeof(numbers[0])};

    cout << "Enter the numbers:\n";
    takeInput(numbers,size);

    int sum{calculateSum(numbers,size)};
    cout<<"The total Sum of Numbers is : "<<sum<<endl;
    return 0;
}