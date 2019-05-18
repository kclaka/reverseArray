/**
 * This code reverse an array in place without using extra memory space
 *
 */

#include <iostream>
/**
 * Swaps Values of the Array starting the with the first and last and the moves on to ther indeses
 * @param arr
 * @param start
 * @param end
 */
void swapValues(int arr[], int start, int end){
    int temp = 0;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}

/**
 * Prints the Values of the array in a single line
 * @param arr Integr Array
 * @param size Size of the Array
 */
void printArray(int arr[], int size){
    int i = 0;
    for(i; i < size; i++){
        std::cout<<arr[i]<<" ";

    }
}



/**
 * Drive Code to test reverse operation
 * @return the original and reversed array
 */
int main() {
    int arr[]{90, 80, 70, 50, 40, 30, 20, 10};
    int size = sizeof(arr)/ sizeof(arr[0]);

    std::cout<<"Before Swap"<<"\n";
    printArray(arr, size);
    std::cout<<"\n";
    swapValues(arr, 0, size-1);
    std::cout<<"After Swap"<<"\n";
    printArray(arr, size);

}