#pragma GCC optimize("unroll-loops,O3,Ofast")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef int INT;
#define int ll

bool poss(vector<int> &v ,int mid){
    bool flag = false;
    int sum =0;
    int j=0;
    int i =0;
   for (int i = 0; i < v.size(); i++)
   {
    sum=0;
    for (int j = i; j < v.size(); j++)
    {
        sum = sum + v[j];
        // cout<<sum<<" " <<v[j]<<endl;
        if(sum == mid) return true;
        if(v[j+1]-v[i]>1){
            sum =0;
            break;
        }
    }
    
   }
    return false;
   
    
    // return flag;
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
                // cout<<mid<<endl;
                if(poss(a, mid)){
                    l= mid+1;
                }
                else{
                    r = mid-1;
                }
            }
}

int findMex(vector<int> &a)

{
    std::set<int> myset;
    for (int i = 0; i < a.size(); i++)
    {
        myset.insert(a[i]);
    }
    
    int mex = 0;

for( auto elem : myset )
{

    if(elem!= mex)
        {
        break;
        }
        else{
            mex++;
           
            }
}
return mex;
        


}

int modulo(int x, int y){
    return ((x / y + 1) * y - x);
}
 
int maxExponent(int n, int m) {
    if (m <= 1) {
        // Special cases: m=1, power will always be 0 for any n >= 1
        return 0;
    }

    int exponent = 0;
    int power = 1;
    
    // Loop to find the maximum exponent
    while (power * m <= n) {
        power *= m;
        exponent++;
    }

    return exponent;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findMax(vector<int>&a){
    int maxi = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        maxi = max(maxi, a[i]);
    }
    return maxi;
}

signed main(){
    int a[300001]={0};
    int t;cin>>t;
    map<int,int> mp;
	while(t--){
            vector<int> v;
            v= {1,3,2,0,0,0,0,2,2,1};
            int high= v.size();
            int mid =0;
            int low=0;
            while(mid<high)
            {
                if(v[mid]==0){
                    swap(v[mid],v[low]);
                    low++;mid++;
                }
                else if(v[mid]==1){
                    mid++;
                }
                else{
                    swap(v[mid],v[high-1]);
                    high--;
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            
            
            
            }
}




