/*
Second Largest

Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

Time Complexity: O(n)
Auxiliary Space: O(1)
*/

#include <stdio.h>

int getSecondLargest(int *arr, int n);

int main()
{
//    int arr[] = { 12, 35, 1, 10, 34, 1 };
//    int arr[] = { 10, 5, 10 };
    int arr[] = { 10, 10, 10 };

    int Size = sizeof(arr) / sizeof(arr[0]);

//    printf("%d\n", getSecondLargest(arr, Size));
    getSecondLargest(arr, Size);

    return 0;
}

int getSecondLargest(int *arr, int n)
{
    int i = 0;//      printf("n : %d\n", n);
    
    int largestNo = -1;
    int secondLargestNo = -1;

    while(i <  n)
    {
        printf("%d\t", *(arr + i));
        if(*(arr + i) > largestNo)
        {
            printf("if\t");
            secondLargestNo = largestNo;
            largestNo = *(arr + i);
        }
        else if(largestNo > *(arr + i) && *(arr + i) > secondLargestNo)
        {
            printf("else if\t");
            secondLargestNo = *(arr + i);
        }
        printf("%d iteration :: secondLargestNo : %d and largestNo : %d\n", i, secondLargestNo, largestNo);
        i++;
    }

    return -1;
}