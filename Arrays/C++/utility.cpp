#include<iostream>
#include<stdio.h>
using namespace std;

void printArray(int arr[], int size)
{
  int i;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("%\n ");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7,8,9,10,11,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int n = sizeof(arr[])/sizeof(arr[0]);

    printArray(arr+2,n-2);
}
