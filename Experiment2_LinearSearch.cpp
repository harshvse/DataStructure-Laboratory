#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Size of Array" << endl;
    cin >> n;

    int array[n+1];

    cout << "Enter " << n << " Elements:" << endl;
    for (int i= 0; i < n; i++){
        cout << "A[" << i << "]= ";
        cin >> array[i];
        cout << endl;
    }

    int item;
    cout << "Enter the number you want to search for: ";
    cin >> item;
    cout << endl;
    array[n]=item;

    for(int i=0; i<=n; i++){
        if(array[i]== item && i < n){
            cout << "Element found at index: " << i << endl;
            break;
        }
        else if(array[i]== item && i == n){
            cout << "Element was not In the index";
        }
    }


    return 0;
}
