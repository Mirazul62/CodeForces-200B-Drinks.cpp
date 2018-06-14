#include<bits/stdc++.h>
using namespace std;
int main()
{
    double c, a=0,n,i,count=0,r;

    cin>>n;
    a=n*100;


    for(i=0;i<n;i++)
    {
        cin>>c;
        count+=c;
    }
    r=(count/a)*100;

    printf("%.12lf ", r);

}
