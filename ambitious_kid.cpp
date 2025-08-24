#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=abs(x);
        if(a[i]<mini){
            mini=a[i];
        }
    }
    cout<<mini<<endl;

    
}