#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[10],i,sum=0;
    for(i=0;i<3;i++){
        std::cin>>arr[i];
    }
     for(i=0;i<3;i++){
         sum = sum+arr[i];
     }
    std::cout<<sum;
    
    return 0;
}
