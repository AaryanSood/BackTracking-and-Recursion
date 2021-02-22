#include <iostream>
using namespace std;
 
void solve(string op, int k){
	if(k == 0){
		cout<<op<<endl;
		return;
	}

	string op1 = op;
	op1.push_back('0');
	solve(op1, k-1);
	if(op.size() == 0){
		string op2 = op;
		op2.push_back('1');
		solve(op2, k-1);
	}
	if(op[op.length()-1] == '0' && op.length()!=0){
		string op2 = op;
		op2.push_back('1');
		solve(op2, k-1);
	}
}

int main(){

	int k;
	cin>>k;

	string str = "";

	solve(str, k);

	return 0;
}
