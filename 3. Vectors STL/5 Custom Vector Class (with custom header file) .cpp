#include<iostream>
#include"vector.h" // when we have custom header file we use double quotes
using namespace std;

// Container Design (Creating a custom header file)
// vector.h

int main(){
    Vector v;  // when we use STL then we have to use <int> , bcoz of the concept of Template
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    v.push_back(6);
    v.push_back(7);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Capacity: "<<v.capacity();

    return 0;
}
