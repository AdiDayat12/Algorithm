#include <stdio.h>
#include <stdlib.h>
int Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int SelectionSort(int myArr[], int len)
{
    for (int i =  0; i < len-1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < len; j++)
        {
            if (myArr[j] < myArr[min_idx])
                min_idx = j;
        }
        Swap(&myArr[min_idx],&myArr[i]);
    }
}
int main()
{
    int len;
    printf("Masukan panjang array : ");scanf("%d",&len);
    int* myArr;
    myArr = (int*)malloc(len*sizeof(int));
    printf("Masukan elemen array : \n");
    for(int i = 0; i < len; i++)
        scanf("%d",&myArr[i]);

    printf("\nArray : ");
    for(int i = 0; i < len; i++)
        printf("%d ",myArr[i]);

    SelectionSort(myArr, len);
    printf("\nArray : ");
    for(int i = 0; i < len; i++)
        printf("%d ",myArr[i]);

    free(myArr);
    return 0;
}
