#include <stdio.h>

// 定义一个swap函数
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapArr(int arr[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        swap(&arr[i], &arr[len - i - 1]);
    }
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Please input num %d\n", i + 1);
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }
    printf("---------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("---------\n");
    printf("Before swap:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    swapArr(arr, 5);

    printf("After swap:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i, arr[i]);
    }

    return 0;
}