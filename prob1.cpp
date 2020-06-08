#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,g;
    cin>>t;

    int a[5]={1, 5, 10, 20, 100};
    while(t>0)
    {
        int c=0;
        int sum=0;
        int i=4;
        int flag=0;
        int flag1=0;
        cin>>n;
        for(int i=4;i>=0;i--)
        {

                while(sum<n)
                {
                    sum=sum+a[i];
                    c++;
                    if(sum>n)
                    {
                        c--;
                        sum=sum-a[i];
                        break;
                    }
                }

        }
        cout<<c<<"\n";
        t=t-1;
    }

    return 0;
}