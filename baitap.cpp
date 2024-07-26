#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;cin>>num;
    vector<int> v;
    vector<int> prefix(num+1,0);
    while(num--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n;cin>>n;
    while(n--){
        int l,r;cin>>l>>r;
        int sum=0;
        for(int i=l-1;i< r;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
        }
    }

