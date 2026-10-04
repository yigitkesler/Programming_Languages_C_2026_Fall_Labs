/*
 * Lab 3, Task 1
 * Name: Yigit Kesler
 * Student ID: 251ADB030
 *
 * Implement array algorithms:
 *   - find minimum value
 *   - find maximum value
 *   - calculate sum
 *   - calculate average
 *
 * Rules:
 *   - Write separate functions for each operation.
 *   - Work with int arrays.
 *   - Do not include any headers besides <stdio.h>.
 *   - You may assume size >= 1 and that the sum fits in an int.
 *   - Average must return a float and must NOT be truncated
 *     (e.g. {1, 2} -> 1.50, not 1.00).
 *   - Do not modify main.
 */

#include <stdio.h>

// Function prototypes
int array_min(int arr[], int size);
int array_max(int arr[], int size);
int array_sum(int arr[], int size);
float array_avg(int arr[], int size);

int main(void) {
  int arr[] = {10, 20, 5, 30, 15};
  int size = 5;

  printf("Min: %d\n", array_min(arr, size));
  printf("Max: %d\n", array_max(arr, size));
  printf("Sum: %d\n", array_sum(arr, size));
  printf("Avg: %.2f\n", array_avg(arr, size));

  return 0;
}

// Implement functions below
int array_min(int arr[], int size) {
  int min = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}

int array_max(int arr[], int size) {
  int max = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int array_sum(int arr[], int size) {
  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  return sum;
}

float array_avg(int arr[], int size) {
  int sum = array_sum(arr, size);
  return (float)sum / size;
}