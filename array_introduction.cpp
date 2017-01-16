#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int len,arr[1002],i;
    std::cin>>len;
    for(i=1;i<=len;i++){
        std::cin>>arr[i];
    }
    for(i=len;i>=1;i--){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
