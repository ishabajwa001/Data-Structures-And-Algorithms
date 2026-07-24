#include <iostream>
using namespace std;

// Finds the largest element in the array using traversal.
int findLargestNumber(const int numbers[],int size){

    int largestNum = numbers[0];
    for(int i = 1 ; i < size ; i++){
        if(numbers[i] > largestNum){
            largestNum = numbers[i];
        }
    }
    return largestNum;
}

// main function
int main(){

    int numbers[5]{45,65,34,69,100};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int largestNumber = findLargestNumber(numbers,size);
    cout<<"The largest number is : "<<largestNumber;
    return 0;
}