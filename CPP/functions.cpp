#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int great;
int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c && a>d){
        great = a;
    }
    else if(b>c && b>d){
        great = b;
    }else if(c>d){
        great = c;
      } else 
        great = d;
    return great;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

