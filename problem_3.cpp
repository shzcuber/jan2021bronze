#include<bits/stdc++.h>
using namespace std;

int heights[20], stalls[20];
int N; 

int validStalls(int index, int cowHeight){
    int numStalls=0;
    while(index>=0){
        if(stalls[index--]>=cowHeight) numStalls++; 
        else break;
    }
    return numStalls;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    cin>>N;
    for(int i=0; i<N; i++) cin>>heights[i];
    for(int i=0; i<N; i++) cin>>stalls[i];

    sort(heights, heights+N);
    sort(stalls, stalls+N);

    long long ans=1;
    for(int i=N-1; i>=0; i--)
        ans*=validStalls(i, heights[i]);

    cout<<ans;
}
