//  Update all even-indexed elements by a factor
#include <iostream>
using namespace std;

//Function to Take Input and store it in array
void takeInputArray(int numbers[],const int size){
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter the number at index "<<i<<" : ";
        cin>>numbers[i];
    }
}

//Function to check if index is even then multiply element with factor
void multiplyEvenIndexElement(int numbers[],const int size, const int factor){
    for(int i = 0 ; i < size ; i+=2){
            numbers[i] *= factor;
    }
}

//Function to Display the Array
void displayArray(int numbers[],const int size){
    for (int i = 0 ; i < size-1 ; i++){
        cout<<numbers[i]<<" , ";
    }
    cout<<numbers[size-1];
    cout<<endl;
}

//Main function
int main(){

    //declaration and initialization of size variable
    int size{0};
    cout<<"How many numbers you wanna enter : ";
    cin>>size;
    if(size <= 0){
        cout<<"Array must be greater than 0."<<endl;
        return 0;
    }

    //Dynamic Array
    int *numbers{new int[size]};
    takeInputArray(numbers,size);

    //Take factor
    int factor{0};
    cout<<"Enter the multiplication factor : ";
    cin>>factor;

    //Display Original Array before updating
    cout<<"Original Array : ";
    displayArray(numbers,size);

    //Update the array 
    multiplyEvenIndexElement(numbers,size,factor);
    cout<<"Updated Array : ";
    displayArray(numbers,size);

    // free memory and exit program
    delete []numbers;
    numbers = nullptr;
    return 0;
}