//        7. Write a program to find sum of vector elements
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
     vector <int > v1={1,2,3,4,5};
     int sum=accumulate(v1.begin(),v1.end(),0);
     cout<<"sum of vecter data is -> "<<sum;
}
