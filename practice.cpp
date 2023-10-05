#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){

    vector< pair<int,int> > v;

    int n;
    cout<<"Enter the number of pairs\n";
    cin>>n;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }