#include <iostream>
using namespace std;

// find the smallest number and return it
int findSmallestNumber(const int numbers[],int size){
    int smallestNum{numbers[0]};
    int index{1};
    
    while(index < size){
        if(numbers[index] < smallestNum){
            smallestNum = numbers[index];
        }
        index++;
    }
    return smallestNum;
}

//main function
int main(){

    int numbers[5]{4,-5,6,0,-1};
    int size{sizeof(numbers)/sizeof(numbers[0])};

    int smallestNumber{findSmallestNumber(numbers,size)};
    cout<<"The Smallest Number is : "<<smallestNumber<<endl;

    return 0;
}