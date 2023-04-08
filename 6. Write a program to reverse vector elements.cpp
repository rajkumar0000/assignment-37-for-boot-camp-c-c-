//        6. Write a program to reverse vector elements
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
     vector <int > v1={100,200,500,300,400};
     vector<int>::iterator i;
     for(i=v1.begin(); i!=v1.end();i++)
          cout<<*i<<" ";
          cout<<"\nreversed "<<endl;
     reverse(v1.begin(),v1.end());
     for(auto i:v1)
          cout<<i<<" ";
}
