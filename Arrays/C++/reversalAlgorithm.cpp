#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int n){
    cout<< "\n";
    for(int i=0; i<n; i++){
        cout<<"\t"<<arr[i];
    }
}

void rotate(int arr[],int start,int end){
    int temp;
    while(start < end){
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
}

void rotateArray(int arr[],int n,int d){
    rotate(arr,0,d-1);
    rotate(arr,d,n-1);
    rotate(arr,0,n-1);
}


int main(){
    int n,d;
    cout<<"\n"<<"Enter the size of the Array :";
    cin>>n;
    int *arr =new int[n];
    cout<<"\n Enter "<<n<<" numbers :"<<"\n";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n Enter d (Digits to Rotate)";
    cin>>d;
    rotateArray(arr,n,d);
    printArray(arr,n);
    return 0;

}
