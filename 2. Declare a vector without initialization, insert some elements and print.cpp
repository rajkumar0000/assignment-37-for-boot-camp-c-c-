//        2. Declare a vector without initialization, insert some elements and print
#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector <int>v1;
     for(int i=1 ; i<=5 ; i++)
     {
          v1.push_back(i*100);
     }
     for(auto x:v1)
          cout<<x<<" ";
     return 0;
}
