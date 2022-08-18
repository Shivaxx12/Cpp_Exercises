#include <iostream>
using namespace std;

/*void printArray(int arr[][4]){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}*/

void printSumRow(int arr[][4]){
    for(int row = 0; row < 3; row++){
    int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

void printSumCol(int arr[][4]){
    for(int col = 0; col < 4; col++){
        int sum = 0;
        for(int row = 0; row < 3; row++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

void wavePrint(int arr[][4], int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(col%2 != 0){
                cout << arr[];
            }
        }
    }        

}

int main(){

    int arr[3][4];
    cout << "Enter the elements of the array: ";
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
        //printArray(arr);
    }
    
    cout << "Printing the array: " << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    cout << endl << "Sum of Row is: " << endl;
    printSumRow(arr);
    
    cout << endl << "Sum of column is: " << endl;
    printSumCol(arr);

}