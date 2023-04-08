//        10. Write a program to check whether an element exists in a vector or not
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
     vector <int>v1={5,7,9,1,2,5,4,0};
     cout<<"which is finde element in vecter : ";
     int n;
     cin>>n;
     vector<int>::iterator it;
     it = find(v1.begin(),v1.end(),n);
     if(*it==n)
          cout<<"found"<<endl;
     else
          cout<<"not found"<<endl;

}
