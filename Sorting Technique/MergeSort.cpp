#include <iostream>
#include <vector>

using namespace std;

// Merge function to merge two subarrays into one sorted array
void merge(vector<int> &arr, int left, int middle, int right)
{
     int n1 = middle - left + 1;
     int n2 = right - middle;

     // Create temporary arrays
     vector<int> L(n1);
     vector<int> R(n2);

     // Copy data to temporary arrays L[] and R[]
     for (int i = 0; i < n1; i++)
          L[i] = arr[left + i];
     for (int j = 0; j < n2; j++)
          R[j] = arr[middle + 1 + j];

     // Merge the temporary arrays back into arr[left..right]
     int i = 0;    // Initial index of first subarray
     int j = 0;    // Initial index of second subarray
     int k = left; // Initial index of merged subarray
     while (i < n1 && j < n2)
     {
          if (L[i] <= R[j])
          {
               arr[k] = L[i];
               i++;
          }
          else
          {
               arr[k] = R[j];
               j++;
          }
          k++;
     }

     // Copy the remaining elements of L[], if there are any
     while (i < n1)
     {
          arr[k] = L[i];
          i++;
          k++;
     }

     // Copy the remaining elements of R[], if there are any
     while (j < n2)
     {
          arr[k] = R[j];
          j++;
          k++;
     }
}

// Merge sort function
void mergeSort(vector<int> &arr, int left, int right)
{
     if (left < right)
     {
          // Same as (left+right)/2, but avoids overflow for large left and right
          int middle = left + (right - left) / 2;

          // Sort first and second halves
          mergeSort(arr, left, middle);
          mergeSort(arr, middle + 1, right);

          // Merge the sorted halves
          merge(arr, left, middle, right);
     }
}

// Function to print an array
void printArray(const vector<int> &arr)
{
     for (int i : arr)
          cout << i << " ";
     cout << endl;
}

int main()
{

     int arr_size;
     cin >> arr_size;
     vector<int> arr(arr_size);
     for (int i = 0; i < arr_size; i++)
          cin >> arr[i];

     cout << "Given array is: ";
     printArray(arr);

     mergeSort(arr, 0, arr_size - 1);

     cout << "Sorted array is: ";
     printArray(arr);
     return 0;
}
