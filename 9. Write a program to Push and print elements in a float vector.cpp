//        9. Write a program to Push and print elements in a float vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector<float>v1;
     v1.push_back(10.5);
     v1.push_back(15.2);
     v1.push_back(20.5);
     v1.push_back(1.5);
     v1.push_back(5.5);
     for(auto x:v1)
          cout<<x<<" ";
}
