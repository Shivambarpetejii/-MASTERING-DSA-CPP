//Question print the 1. Square Pattern

// ****
// ****
// ****
// ****
#include<iostream>
using namespace std;

int main(){
    
    int input;
    cin>>input;
    
    // //first solution for 
    // for(int i=0; i<input; i++)//----------(n+1)
    // {
    //     for(int j=0; j<input; j++)//-------n(n+1)
    //     {
    //         cout<<"*"<<" ";//------------n*n
    //     }
    //     cout<<endl;//---------------n
    // }
    
    // // total time complexcity is (n*n)
    // // total space complexcity is O(1)
    
    // seconde solution:- 
    string str ;
     for(int i=0; i<input; i++)//-----------------(n+1)
     {
         str+="* ";//----------------------------(n)
         
     }
     
     for(int i=0; i<input; i++)//-----------------------(n+1)
     {
         cout<<str<<endl;//----------------------(n)
     }
     
     // total time complexcity is O(n)
     // total space com is O(n)
    
    
    
    return 0;
}
