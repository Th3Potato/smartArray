#include "smartArray.h"

int arraySize(int arr[]){
    int size = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i]){
            size++;
        }
    }
    return size;
}

int arrayAppend(int arr[], int num){
    int size = arraySize(arr);

    if(num == 0){
        return 0;
    }
    if(size == 0){
        arr[0] = num;
        return 1;
    }
    for(int i = 0; i < size; i++){
        if(num == arr[i]){
            return 0;
        }
        if(num < arr[i]){
            memmove(&arr[i+1],&arr[i], sizeof(int)*(9-i+1));
            arr[i] = num;
            return 1;
        }
    }
    arr[size] = num;

    return 1;
}

int arrayRemove(int arr[], int num){
    int size = arraySize(arr);

    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            memmove(&arr[i], &arr[i+1], sizeof(int) * (9-i+1));
            arr[8] = 0;
            return 1;
        }
    }
    return 0;
}

int arrayEqual(int arr1[], int arr2[]){
    int size1 = arraySize(arr1);
    int size2 = arraySize(arr2);
    if(size1 != size2){
        return 0;
    }
    for(int i = 0; i < size1; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

int arrayExist(int arr[], int num){
    int *arrP = &arr[0];
    while(*arrP){
        if(*arrP == num){
            return 1;
        }
        arrP++;
    }
    return 0;
}

void printArr(int arr[]){
    int size = arraySize(arr);

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int makeArr(int *arr){
    int num;
    
    for(int i = 0; i <= 9; i++){
        scanf("%d", &num);
        if(num != 0){
            arr[i] = num;
        }else{
            for(int j = i; j <= 9; j++){
                arr[j] = 0;
            }
            return 1;
        }
    }
    return 1;
}
