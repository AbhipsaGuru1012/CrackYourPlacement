// https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
	
	unordered_map<char, int> mp;
	for(int i=0;i<str.length();i++){
		if(mp.find(str.at(i))==mp.end()){
			mp[str.at(i)]=1;
		}else{
			mp[str.at(i)]++;
		}
	}
	for (auto i : mp){
	    if(i.second>1){
	       cout<<"count of "<<i.first<<"-"<<i.second<<endl; 
	    }
		
	}

    return 0;
}