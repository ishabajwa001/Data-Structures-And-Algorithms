//Replace every element with the next greater element

#include <iostream>
using namespace std;

//Take input and store it in array
void takeInputArray(int numbers[],const int size){
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter the number at index "<<i<<" : ";
        cin>>numbers[i];
    }
}

//Display the array
void displayArray(const int numbers[],const int size){
    for(int i = 0 ; i < size-1 ; i++){
        cout<<numbers[i]<<" , ";
    }
    cout<<numbers[size-1];
    cout<<endl;
}

// Replace each element with the first greater element to its right.
void replaceWithNextGreaterElement(int numbers[],const int size){
    int *tempNumbers{new int[size]};
    for(int i = 0 ; i < size ; i++){
        int nextGreater = -1;
        for(int j = i+1 ; j < size ; j++){
            if(numbers[j] > numbers[i]){
                nextGreater = numbers[j];
                break;
            }
        }
        
        tempNumbers[i] = nextGreater;
    }

    // Copy the updated values back to the original array.
    for(int i = 0 ; i < size ; i++){
        numbers[i] = tempNumbers[i];
    }

    delete [] tempNumbers;
    tempNumbers = nullptr;
}

//main function
int main(){

    //Initialize and declare size
    int size;
    cout<<"How many numbers you wanna enter : ";
    cin>>size;
    if(size <= 0 ){
        cout<<"Array must be greater than 0.";
        return 0;
    }

    //Dynamic array
    int *numbers{new int[size]};
    takeInputArray(numbers,size);

    cout<<"Original Array : ";
    displayArray(numbers,size);

    replaceWithNextGreaterElement(numbers,size);
    cout<<"Updated Array : ";
    displayArray(numbers,size);

    //free memory and exit
    delete []numbers;
    numbers = nullptr;
    return 0;

}