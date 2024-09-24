#pragma GCC optimize("unroll-loops,O3,Ofast")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef int INT;
#define int ll


bool poss(vector<int> &v ,int mid){
    return false;
}
void xswap( int &a , int &b){
    
    a = a^b;
    b=  b^a;
    a= a^b;
}

int extractBit(int n, int position){
    int count = 0;
    n = n & (1<<(position+1));
    while(n>0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

void changeToOne(int &n, int position){
    // masking with a left shift
    n = n & (1<<(position+1));
}

void changeToZero(int &n, int position){
    // masking to the not of left shift
    n = n & ~(1<<(position+1));
}


void binarySerach(){
    vector<int> a(2);
            int r = 20000000000;
            int l =0;
            int mid = (l+r)/2;
            // cout<<r<<endl;
            while(l<=r){
                // cout<<"this code works"<<endl;
                mid = (l+r)/2;
                if(poss(a, mid)){
                    r = mid-1;
                }
                else{
                    l= mid+1;
                }
            }
}
signed main(){
    int a =2;
    int b =3;
    xswap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<extractBit(2,1)<<endl;
}
