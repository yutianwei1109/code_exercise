#include <stdio.h>

int half_find(int arr[], int size, int data)
{
    int left = 0;
    int right = size - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(data < arr[mid]) right = mid - 1;
        if(data > arr[mid]) left = mid + 1;
        if(data == arr[mid]) return mid;
    }
    return -1;
}

int main()
{
    int num[] = {10,20,30,40,50,60,70,80,90};
    int res = half_find(num, 9, 80);
    printf("%d\n", res);

    return 0;
}