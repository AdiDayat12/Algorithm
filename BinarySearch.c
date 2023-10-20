#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int BubbleSort(int myArr[], int len)
{
    int i,j;
    for (int i = 0; i < len-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < len-1-i; j++)
        {
            if (myArr[j] > myArr[j+1])
            {
                int temp = myArr[j];
                myArr[j] = myArr[j+1];
                myArr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}
int BinarySearch(int myArr[], int target, int low, int high)
{
    while(low <= high)
    {
        int mid = (high + low) / 2;
        if (target == myArr[mid])
            return mid;
        if (myArr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;

}

int main()
{
    printf("Hello world!\n");
    int len;
    printf("Masukan panjang array : ");scanf("%d",&len);
    int* myArr;
    myArr = (int*)malloc(len*sizeof(int));
    printf("Masukan elemen array : \n");
    for (int i = 0; i < len; i++)
        scanf("%d",&myArr[i]);
    printf("\nArray : ");
    for (int i = 0; i < len; i++)
        printf("%d ",myArr[i]);
    BubbleSort(myArr, len);
    printf("\nArray yang diurut : ");
    for (int i = 0; i < len; i++)
        printf("%d ",myArr[i]);

    int target;
    printf("\nMasukan angka yang ingin anda cari : ");scanf("%d", &target);
    int hasil;
    ((hasil = BinarySearch(myArr, target, 0, len-1)) == -1) ? printf("\nAnda yang anda cari tidak terdapat pada list") :
        printf("\nAngka yang anda cari berada pada indeks %d", hasil);
    return 0;
}
