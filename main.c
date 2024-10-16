#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define LENGTH 10

void print_array(int array[]) {
    int i;

    for (i = 0; i < LENGTH; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}

void selection_sort(int array[]) {
    int i, j, index, step = 0, temp;
    
    printf("Selection Sort\n");
    printf("Starting Array: ");
    print_array(array);
    
    for (i = 0; i < LENGTH; i++) {
        index = i;

        for (j = i+1; j < LENGTH; j++) {

            if (array[j] < array[index]) {
                index = j;
            }

        }

        if (index != i) {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        } else if (step == 0 && i == LENGTH - 1) {
            printf("Already sorted.\n");
        }

        printf("Step %d: ", ++step);
        print_array(array);

    }
    
}

void bubble_sort(int array[]) {
    int i, j, temp, step = 0;

    printf("Bubble Sort\nStarting array: ");
    print_array(array);
    
    for (i = 0; i < LENGTH-1; i++) {

        for (j = 0; j < LENGTH-1-i; j++) {

            if (array[j] > array[j+1]) {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }

        }

        printf("Step %d: ", i+1);
        print_array(array);

    }

}

int main() {
    /*int array[LENGTH] = {5, 3, 8, 10, 2, 9, 6, 1, 4, 7};*/
    /*int array[LENGTH] = {3, -1, 4, 0, -5, 2, -3, 1, -4, 5};*/
    //int array[LENGTH] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int array[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    

    bubble_sort(array);
}