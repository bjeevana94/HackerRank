#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i,c,j,fst,scd;
    int arr[4];
    for(i=1;i<=2;i++){
    std::cin>>arr[i];
   }
   fst = arr[1];
   scd = arr[2];
   
   for (i=fst;i<=scd;i++){
            
            switch(fst){
            case 1 : std::cout<<"one\n"; break;
            case 2 : std::cout<<"two\n"; break;
            case 3 : std::cout<<"three\n"; break;  
            case 4 : std::cout<<"four\n"; break;  
            case 5 : std::cout<<"five\n"; break;  
            case 6 : std::cout<<"six\n"; break;  
            case 7 : std::cout<<"seven\n"; break;  
            case 8 : std::cout<<"eight\n"; break;
            case 9 : std::cout<<"nine\n"; break;
            default : if(fst%2==0){ std::cout <<"even\n";}
                      else std::cout<<"odd\n";
           }
       fst++;
         }    
    
   /* switch(arr[j]){
            case 1 : std::cout<<"one\n"; break;
            case 2 : std::cout<<"two\n"; break;
            case 3 : std::cout<<"three\n"; break;  
            case 4 : std::cout<<"four\n"; break;  
            case 5 : std::cout<<"five\n"; break;  
            case 6 : std::cout<<"six\n"; break;  
            case 7 : std::cout<<"seven\n"; break;  
            case 8 : std::cout<<"eight\n"; break; 
            case 9 : std::cout<<"nine\n"; break; 
            default : std::cout<<"nine\n";  
     } */

    
     
        return 0;
}
