#include <stdio.h>
#include <stdlib.h>
int LinearSearch(int len, int myArr[],int searchKey)
{
    for(int i = 0; i < len; i++)
    {
        if(myArr[i] == searchKey)
            return i;//element found in i index
    }
    return -1;//element not found
}
int main()
{
    int len;//the size of array
    printf("Enter the length of array : ");scanf("%d",&len);
    int* myArr;
    myArr = (int*)malloc(len*sizeof(myArr));
    printf("Enter elements : \n");
    for (int i = 0 ; i < len; i++)
        scanf("%d",&myArr[i]);
    printf("\nArray : ");
    for (int i = 0; i < len; i++)
        printf("%d ",myArr[i]);
    int searchKey;
    printf("\nEnter the element you want to find : ");scanf("%d",&searchKey);
    int result = LinearSearch(len, myArr, searchKey);
    (result == -1) ? printf("\nThe number you've entered is not found"):
        printf("\nThe number you've entered is in %dth index",result);

    free(myArr);
    return 0;
}
