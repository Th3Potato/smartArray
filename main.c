#include "smartArray.h"

int main(void){
    int arr[9];
    int num;
    makeArr(arr);

    printArr(arr);
    scanf("%d", &num);
    printf("finnes: %d\n", arrayExist(arr, num));
    printArr(arr);

    int arr1[] = {1,3,7,0,0,0,0,0,0};
    int arr2[] = {1,3,5,7,0,0,0,0,0};
    printf("første: %d, andre: %d\n", arrayEqual(arr,arr1), arrayEqual(arr,arr2));

   return 1; 
}