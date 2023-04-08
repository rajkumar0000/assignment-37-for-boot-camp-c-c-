//        4. Write a program to Copy one vector’s elements to another vector.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector <int >v1={5,7,3,2,1};
     vector <int >v2;
     v2.assign(v1.begin(),v1.end());
     for( auto x : v2)
          cout<<x;
}
