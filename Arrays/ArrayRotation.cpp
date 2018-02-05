// Array rotation using Juggling Algorithm

#include <iostream.h>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    else
        return gcd(b,a%b);
}

void printArray(int arr[],int n){
    cout<< "\n";
    for(int i=0; i<n; i++){
        cout<<"\t"<<arr[i];
    }
}

void rotateArray(int arr[],int n,int d){
    int i,j,k,temp;
    for(i=0;i<gcd(d,n);i++){
        j = i;
        while(1){
            k =j + d;
            if(k >=n)
                k = k-n;
            if(k ==i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

int main(){
    int n,d;
    cout<<"\n"<<"Enter the size of the Array :";
    cin>>n;
    int *arr =new int[n];
    cout<<"\n Enter"<<n<<"numbers :"<<"\n";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n Enter d (Digits to Rotate)";
    cin>>d;
    rotateArray(arr,n,d);
    printArray(arr,n);
    return 0;

}
