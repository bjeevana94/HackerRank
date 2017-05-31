#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
        
    // Declare second integer, double, and String variables.
    int in;
    double dob;
    string st;
    string cat;

    // Read and save an integer, double, and String to your variables.
    cin >> in ;
    cin >> dob;
    cin>>std::ws; 
    getline(cin,st);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<in+i<<endl;
    // Print the sum of the double variables on a new line.
   
    cout<<fixed << setprecision(1)<<dob +d <<endl;
    
    // Concatenate and print the String variables on a new line
    cat = s + st;
     cout<<cat<<endl;
    // The 's' variable above should be printed first.
    
    return 0;
}