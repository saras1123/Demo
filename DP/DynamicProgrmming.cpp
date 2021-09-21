#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>& steps){

    int n = steps.size();

    vector<int>jumps(n,INT_MAX);
    jumps[0] = 0;   //dont mismatch jumps and steps;

    for(int i=1 ; i<n ;i++){
            for(int j =0 ; j<i ; j++){
            if(j+steps[j]>=i){
                if(jumps[j]+1 < jumps[i]){

                    jumps[i] = jumps[j]+1;

                }
                }
          }
    }

    cout<<"Minimum step is "<<jumps[n-1];


}





int main(){
    vector<int>steps = { 1, 3, 6, 1, 0, 9 };
    solve(steps);


}
