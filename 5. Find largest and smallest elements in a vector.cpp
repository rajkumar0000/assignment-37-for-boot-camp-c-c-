//        5. Find largest and smallest elements in a vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector <int >v1={100,500,400,700,200};
     cout<<"max element is -> "<<*max_element(v1.begin(),v1.end())<<endl;
     cout<<"min element is -> "<<*min_element(v1.begin(),v1.end());
}
