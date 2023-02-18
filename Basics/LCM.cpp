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

int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    int lcm=(a*b)/gcd(a,b);
    cout<<lcm<<endl;
}