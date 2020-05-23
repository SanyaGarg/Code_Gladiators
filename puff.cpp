#include<bits/stdc++.h>
#define ll  long long
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main(){

    ll int n;
    cin >>n;

    ll int girl[n];
    ll int ing[n];
    for(ll int i=0;i<n;i++){
        cin >> girl[i];
    }

    for(ll int i=0;i<n;i++){
        cin >> ing[i];
    }

    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(min>(ing[i]/girl[i]))min = (ing[i]/girl[i]);
    }

    cout << min;
}