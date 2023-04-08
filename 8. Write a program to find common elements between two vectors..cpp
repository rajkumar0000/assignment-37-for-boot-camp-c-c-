//        8. Write a program to find common elements between two vectors.
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
     vector <int >v1={100,300,500,200,600};
     vector <int >v2={800,200,600,500,400};
     vector <int >v3(v1.size(),v2.size());
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
     vector<int>::iterator end;
     end = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
     vector<int>::iterator it;
     for(it=v3.begin();it!=end;it++)
          cout<<*it<<" ";
}
