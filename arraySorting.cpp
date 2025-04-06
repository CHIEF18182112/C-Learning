#include<iostream>



void sort(int arr[], int size);

int main(){
    // Big array of integers
    int arr[] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int element: arr){
        std::cout << element << " ";
    }



    sort(arr, size);
    std::cout << "\n Sorted array: ";
    for (int element: arr){
        std::cout << element << " ";
    }

    return 0;
}


//bubble sort algorithm
// Time complexity: O(n^2) in worst case and O(n) in best case
void sort(int array[], int size){

    int temp;
    for (int i = 0; i < size -1; i++){
        for(int j = 0;  j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array [j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
}