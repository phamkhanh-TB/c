#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;cin>>num;
    while(num--){
        int n,k;cin>>n>>k;
        int a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        for (int i=0;i<k;i++){
            sum+=a[i];
        }
        for (int i=k;i<n;i++){
            sum=sum -a[i-k]+a[i];
            cout<<sum<<" ";
        }

    }
}