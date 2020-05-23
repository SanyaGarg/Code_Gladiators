#include<bits\stdc++.h>
#define ll  long long
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

bool compare(int &a,int &b){
    return a>b;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        int g_team[N];
        int oppo_team[N];

        for(int i=0;i<N;i++){
            cin >> g_team[i];
        }

        sort(g_team,g_team+N);

        // for(int i=0;i<N;i++){
        //     cout <<  g_team[i];
        // }
        for(int i=0;i<N;i++){
            cin >> oppo_team[i];
        }

        sort(oppo_team,oppo_team+N);
        int cnt =0;
        int i=0,j=0;
        while(j<N && i<N){
            while(oppo_team[i]>=g_team[j] && j<N){j++;}//cout << j;}
            if(j<N && oppo_team[i]<g_team[j])cnt++;
            i++;
            j++;
            
        }

       cout << cnt << endl;

    }
}