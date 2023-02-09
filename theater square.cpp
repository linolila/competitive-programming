#include<iostream>
using namespace std;
int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    long long first_line_flagstones = ceil(x/z);
    long long iteration=ceil(y/z);
    long long answer=first_line_flagstones*iteration;
    cout<<answer<<endl;
}
