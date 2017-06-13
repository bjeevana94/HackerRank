#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    
    string evens;
    string odds;
    int k;
    std::cin>>t;
    for(int i=0; i<t; i++){
        string s;
        std::cin>>s;
        for(int j =0; j<s.length();j++){
            if(j%2 ==0){
                std::cout<<s[j];
         }
        }
            std::cout<<" ";
        for(int j =0; j<s.length();j++){
            if(j%2!=0){
                std::cout<<s[j];
            }
        }
        std::cout<<"\n";
        }
        
    
    return 0;
}
