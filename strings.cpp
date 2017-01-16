#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    char temp;
    std::cin>>a;
    std::cin>>b;
    int len;
    std::cout<<a.size()<<" "<<b.size()<<"\n";
    std::cout<<a+b<<"\n";
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    std::cout<<a<<" "<<b;
  
    return 0;
}
