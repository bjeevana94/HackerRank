#include <iostream>
using namespace std;

int main() {
int a,l,i,ao,az,j,z,y;
    std::cin>>a;
    std::cin>>l;
    int** arr = new int*[a];
    int** index = new int*[l];
   for(i=0;i<a;i++){
        std::cin>>az;
        arr[i] = new int[az];
         for(j=0;j<az;j++){
             std::cin>>arr[i][j];
            
         }
       }
    for(i=0;i<l;i++){
         for(j=0;j<2;j++){ 
          index[i] = new int[2];
          std::cin>>index[i][j];
           if(j==0)
           z = index[i][j];
           else
           y = index[i][j];             
           }
         std::cout<<arr[z][y]<<"\n";
    }  
	return 0;
} 
