#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        for (int i=1;i<=n;i++){
            if (i%2!=0){
                int temp;
                cin>>temp;
                a.push_back(temp);
            }
            else{
                int temp;
                cin>>temp;
                b.push_back(temp);}
        }

        for (int i=0 ; i<n/2; i++){
            //cout<<i<<" -> "<<a[i]<<" -> "<<b[i]<<endl;
            if (a[i]!=b[i]){
                if (a[i] != 0) a[i] = -1;
                else b[i] = -1;
            }
        }
        vector<int> ans;
        for(int i = 0; i<n/2;i++){
            if (a[i]!=-1) ans.push_back(a[i]);
            if (b[i]!=-1) ans.push_back(b[i]);
            //cout<<i<<" -> "<<a[i]<<" -> "<<b[i]<<endl;
        }
        cout<<ans.size()<<endl;
        for (auto x: ans){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}