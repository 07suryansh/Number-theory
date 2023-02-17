#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<climits>
#include<math.h>

using namespace std;

int fac(int n){
    if(n==0 || n==1)return 1;
    return n*fac(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fac(n)<<endl;
}