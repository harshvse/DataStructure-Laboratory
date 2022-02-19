#include <iostream>

using namespace std;

void Print(int *array, int size);
void InsertElement(int *array, int& size);
void RemoveElement(int *array, int& size);

int main()
{
    int arraySize; // Size of our array

    cout << "Enter the size of the array" << endl;
    cin >> arraySize; //take the input for what the user wants the size of array

    int array[arraySize]; // array declared with twice the size so we can have overhead for adding elements

    cout << "Enter " << arraySize << " Elements: " << endl;

    for (int i = 0; i < arraySize; i++){
        cout << "A[" << i << "]= ";
        cin >> array[i];
    }
    bool flag = true;
    int choice = 0;
    while(flag){
        cout<< "\nPress 1 to Print the Array" << endl;
        cout << "Press 2 to Insert an element" << endl;
        cout << "Press 3 to Remove an element" << endl;
        cout << "Press 0 to exit" << endl;
        cin>> choice;
        switch (choice)
        {
        case 1:
            Print(array, arraySize);
            break;
        case 2:
            InsertElement(array, arraySize);
            break;
        case 3:
            RemoveElement(array, arraySize);
            break;
        case 0:
            flag = 0;
            break;
        default:
            break;
        }
    }

    return 0;
}

void Print(int* array, int size){
    for(int i = 0; i < size; i++){
        cout << "Element A[" << i << "]= " << array[i] << endl;
    }
    return;
}

void InsertElement(int array[], int& size){
    int insertIndex;
    int insertElement;
    size++; // we make space for the new element and then copy the old one to new one
    int newArray[size];
    for(int i = 0; i < size; i++){
        if(i < size-1)
        newArray[i] = array[i];
        else newArray[i] = 0;
    }

    cout << "Array has " << size << " elements" << endl;
    cout << "Enter the index between 0 and " << size-1<< " to insert an element" << endl;
    cin >> insertIndex;
    if(insertIndex < 0 || insertIndex > size-1){
        cout << "Invalid Index" << endl;
        size--;
        return;
    }
    cout << endl;

    cout << "Enter the number to insert" << endl;
    cin >> insertElement;

    if(insertIndex == size-1){
        newArray[size-1] = insertElement;
        for(int i = 0; i < size; i++){
            array[i] = newArray[i];
        }
        return;
    }

    for(int i = size-1; i>=insertIndex;i-- ){
        newArray[i] = newArray[i-1];
    }
    newArray[insertIndex] = insertElement;
    for(int i = 0; i < size; i++){
        array[i] = newArray[i];
    }

}

void RemoveElement(int array[], int &size){
    int removeIndex;

    cout << "Array has " << size << " elements" << endl;
    cout << "Enter the index between 0 and " << size-1<< " to remove an element" << endl;
    cin >> removeIndex;

    for(int i = removeIndex; i<size; i++){
        array[i] = array[i+1];
    }
    size--;

}
