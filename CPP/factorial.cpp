#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
    {
      if(n!=1){
     return n * factorial(n-1); 
      }
     else{
        return 1;
     }
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    std::cin>>n;
    std::cout<<factorial(n);
    return 0;
}
