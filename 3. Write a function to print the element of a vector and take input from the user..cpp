//        3. Write a function to print the element of a vector and take input from the user.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int >v1;
    int d;
    cout<<"Enter a number : ";
    cin>>d;
    v1.push_back(d);
    cout<<"\nPrint data"<<endl;
    cout<<v1[0];
}
