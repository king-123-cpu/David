#include <iostream>
#include "fun.h"
#include <vector>
using namespace std;
int main(){
    vector<int>a={1,2,3,4,5,};
    func(a,2,5);
    for(size_t i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
