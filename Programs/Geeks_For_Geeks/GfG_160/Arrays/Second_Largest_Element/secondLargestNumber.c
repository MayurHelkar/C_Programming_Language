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

Expected Complexities
Time Complexity: O(n)
Auxiliary Space: O(1)

*/

#include <stdio.h>

int getSecondLargest(int *arr, int n) {
    int i =  0;
    
    int largest_1 = *(arr + 0);
    int largest_2 = 0;

    while(i < n)
    {
        if(*(arr + i) > *(arr + i + 1))
        {
            
        }
    }
}

int main()
{
    int res = 0;

    int Arr[] = { 12, 25, 1, 10, 1, 34 };

    int Size = sizeof(Arr) / sizeof(Arr[0]);

    res = getSecondLargest(Arr, Size);

    return 0;
}