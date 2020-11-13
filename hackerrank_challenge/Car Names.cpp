
/*- Consisted of exactly three distinct characters, say C1, C2 and C3
- Satisfied the criteria that the string was of the form - C1n C2n C3n : This means, first C1 occurs n times, then C2 occurs n times and then C3 occurs n times. For example, xyz, ccaarr, mmmiiiaaa satisfy the criteria, but xyzw, aabbbcccc don't.
Given N names suggested by Roman, print "OK" if Brian likes the name and "Not OK" if he doesn't.

*/
#include<bits/stdc++.h>
using namespace std;
void solve(){

string s;
cin>>s;
int z,k;
int i=0;
int n=s.length();
k=count(s.begin(),s.end(),s[i]);
i=i+k;
while(i<n){
z=count(s.begin(),s.end(),s[i]);

if(z!=k || z==1){ // if(z!=k || s=="brian")
    cout<<"Not OK\n";
    return;
}
i=i+z;
}
cout<<"OK\n";
}


int main(){
int t;
cin>>t;
while(t--){
    solve();
}
    return 0;
}
