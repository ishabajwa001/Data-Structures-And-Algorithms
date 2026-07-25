#include <iostream>
using namespace std;

//Take Input
void takeInputArray(int numbers[],const int size){
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter the Number : ";
        cin>>numbers[i];
    }
}

//Calculate maximum and minimum value
void calculateMaxMin(const int numbers[],const int size,int &max,int &min){
    max = numbers[0];
    min = numbers[0];
    for(int i = 1 ; i < size ; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
        if (numbers[i] < min){
            min = numbers[i];
        } 
    }
}

int main(){

    //Take the size of array as input 
    int size{0};
    cout<<"How many Numbers you want to enter : ";
    cin>>size;

    // Check if size is less than or equal to zero
    if (size <= 0) {
    cout << "Size must be greater than 0.\n";
    return 0;
    }

    // Initialize dynamic array
    int *numbers{new int[size]};
    takeInputArray(numbers,size);

    int min{0};
    int max{0};
    calculateMaxMin(numbers,size,max,min);

    cout<<"Maximum Number is : "<<max<<endl;
    cout<<"Minimun Number is : "<<min<<endl;

    //Free memory 
    delete []numbers;
    numbers = nullptr;
    return 0;
}