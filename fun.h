#include <iostream>
#include <string>
#include <vector>
using namespace std;
void func(vector<int>&a,int n,int m){
    int temp=a[n-1];
    a[n-1]=a[m-1];
    a[m-1]=temp;
}