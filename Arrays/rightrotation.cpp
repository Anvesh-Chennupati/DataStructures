#include<iostream>
#include<bits/stdc++.h>
#include<vector>



using namespace std;


int main(){

    vector <int> v1;

    for (int i = 1; i <= 10; i++)
        v1.push_back(i * 10);

    cout << "Size : " << v1.size();
    cout << "\nCapacity : " << v1.capacity();
    cout << "\nMax_Size : " << v1.max_size();


}
