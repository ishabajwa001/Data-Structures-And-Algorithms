#include <iostream>
using namespace std;

int main(){

    //Initialize array and calculate the size of array
    int rollNumbers[10]{};
    int size{sizeof(rollNumbers)/sizeof(rollNumbers[0])};

    int index{0};

    //Take input and store at certain index in array
    while (index < size){
        cout<<"Enter Roll Number : ";
        cin>>rollNumbers[index];
        index++;
    }

    cout<<"\nRoll Numbers are : ";

    //Traverse and display the elements
    int displayIndex{0};
    while(displayIndex < size){
        cout<<rollNumbers[displayIndex]<<" ";
        displayIndex++;
    }
    cout<<endl;
    return 0;
}