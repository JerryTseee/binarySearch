#include<iostream>
using namespace std;

int binarySearch(int a[], int left, int right, int x){
    int mid = (left + right) / 2;
    if (a[mid] == x)
    {
        return mid;
    }
    else{
        if (a[mid] > x ){
            binarySearch(a, left, mid, x);
        }
        else if (a[mid] < x){
            binarySearch(a, mid, right, x);
        }
    }
    
}

int main(){
    int a[] = {1,2,32,14,4313,23234,23,4};
    int length = sizeof(a)/sizeof(a[0]);
    cout<<"the required position is "<<binarySearch(a, 0, length, 4313);
    return 0;
}