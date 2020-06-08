#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int len=n+(n-1);
    for(int i=0;i<len;i++){
         for(int j=0;j<len;j++){
            int min=i<j?i:j;
            min=min<len-j-1?min:len-j-1;
            min=min<len-i-1?min:len-i-1;
            cout<<n-min<<" ";

        }
        cout<<"\n";

    }
    return 0;
}