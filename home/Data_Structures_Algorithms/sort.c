#include <stdio.h>

//冒泡排序
void bubble(int arr[], size_t size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
//插入排序
void insert(int arr[], size_t size)
{
    int i, j;
    int key;
    for (i = 0; i < size; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (key < arr[j])
            {
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j + 1] = key;
    }
}
//选择排序
void select(int arr[], size_t size)
{
    int i, j;
    int tmp;
    int min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j]) min = j;
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}
//快速排序
void quick(int arr[], int start, int end)
{
    int i = start;
    int j = end;
    int x = arr[start];
    while(i < j)
    {
        while(arr[i] < x)
        {
            i++;
        }

        while(arr[j] > x)
        {
            j--;
        }

        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    if (start < i - 1) quick(arr, start, i - 1);
    if (end > i + 1) quick(arr, i + 1, end);
}

int main()
{
    int num[] = {70, 20, 10, 80, 50, 40, 60, 30, 90};
    //insert(num, 9);
    quick(num, 0, 8);
    for(int i = 0; i < 9; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}