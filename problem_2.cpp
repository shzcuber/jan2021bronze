#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	int totalOdds=0, totalEvens=0;
	int N; cin>>N;

	while(N--){
		int c; cin>>c;
		if(c%2) totalOdds++;
		else totalEvens++;
	}

	int group=0;
	while(totalOdds>0 || totalEvens>0){
		if(group%2==0){//even
			if(totalEvens>0) totalEvens--;
			else{
				if(totalOdds>=2) totalOdds-=2;
				else{ group--; break; } 
			}
		}else{//odd
			if(totalOdds>0) totalOdds--;
			else break;
		}
		group++;
	}

	cout<<group;
}
