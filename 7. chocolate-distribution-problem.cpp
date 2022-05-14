// link: https://www.geeksforgeeks.org/chocolate-distribution-problem/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int difference=INT_MAX;
	int m;
	cin>>m;
	sort(v.begin(), v.end());
	for(int i=(m-1);i<v.size();i++){
		int diff=v[i]-v[i-m+1];
		if(diff<difference){
			difference=diff;
		}
	}
	cout<<difference<<endl;
}