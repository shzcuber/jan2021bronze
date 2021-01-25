#include<bits/stdc++.h>
using namespace std;

int main(){
	    ios_base::sync_with_stdio(false);cin.tie(NULL); 
			string cowphabet, word;
			cin>>cowphabet>>word;

			int wordIndex=0, totalLoops=0;
			while(wordIndex<word.length()){
				for(int i=0; i<cowphabet.length(); i++)
					if(word[wordIndex]==cowphabet[i]) wordIndex++;
				totalLoops++;
			}

			cout<<totalLoops;
}

