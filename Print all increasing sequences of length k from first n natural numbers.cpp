#include <bits/stdc++.h> 
using namespace std;

void sets(vector<int> v, vector<int> &sol, 
	vector<vector<int>> &ans, int k, int index){
	if(sol.size() == k){
		ans.push_back(sol);
		return;
	}
	if(index == v.size())
		return;
	sets(v, sol, ans, k, index+1);
	sol.push_back(v[index]);
	sets(v, sol, ans, k, index+1);
	sol.pop_back();
}

int main(){
	int n, r;
	cin>>n;
	vector<int> v;
	vector<int> sol;
	vector<vector<int> > ans;
	for(int i=0; i<n; i++){
		//cin>>o;
		v.push_back(i+1);
	}

	cin>>r;
	sets(v, sol, ans, r, 0);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
