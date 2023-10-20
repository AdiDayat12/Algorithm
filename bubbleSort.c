#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int BubbleSort(int myArr[], int len)
{
    int i,j;
    for (int i = 0; i < len - 1; i++)
    {
        bool swapped = false;
        //Early Termination atau Flagging, untuk mencegah
        //pengulangan apabila larik memang sudah terurut.
        for (int j = 0; j < len - i -1; j++)
        {
            if (myArr[j] > myArr[j+1])
            {
                int temp = myArr[j];
                myArr[j] = myArr[j+1];
                myArr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;

    }
}
int main()
{
    int len;
    printf("Masukan panjang larik : ");scanf("%d",&len);
    int* myArr;
    myArr = (int*)malloc(len*sizeof(int));
    printf("Masukan elemen larik : \n");
    for(int i = 0; i < len; i++)
        scanf("%d",&myArr[i]);
    printf("Larik : ");
    for(int i = 0; i < len; i++)
        printf("%d ",myArr[i]);
    BubbleSort(myArr,len);
    printf("\nLarik setelah diurutkan : ");
    for(int i = 0; i < len; i++)
        printf("%d ",myArr[i]);
    free(myArr);

    return 0;
}
