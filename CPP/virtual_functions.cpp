#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int prof_id =0;
int stud_id =0;
class Person{
    public:
    string name;
    int age,marks,sum=0,pub;
    virtual void getdata()=0;
    virtual void putdata()=0;    
};
class Professor : public Person{
     void getdata() {
         std::cin>>name>>age>>pub;
     }
    void putdata(){ 
    prof_id++;
    std::cout<<name<<" "<<age<<" "<<pub<<" "<<prof_id<<"\n";
    }
};

class Student : public Person {
    void getdata(){
       std::cin>>name>>age;
       for(int i=0;i<6;i++){
       std::cin>>marks;
       sum= sum+marks;
       }       
    }
    void putdata(){ 
    std::cout<<name<<" "<<age<<" "<<sum<<" "<<++stud_id<<"\n";
    }
    
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
