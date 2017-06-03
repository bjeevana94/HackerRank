#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    int counta[26] = {0},countb[26] = {0},del[26] ={0},dele=0;
    
   for (int i =0;i<a.length();i++){
       int index = a[i]-'a';
       counta[index] = counta[index]+1;
    }
    
   
   for (int j =0; j<b.length();j++){
       countb[b[j]-'a'] += 1; 
   }
     
   for ( int i =0; i<26;i++){
     dele = dele + abs(counta[i] - countb[i]);
   }
   
   return dele;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
