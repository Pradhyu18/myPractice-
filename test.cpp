// #pragma GCC optimize()
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int pivot(vector<int>& v, int low, int high){
    int pivot = v[low];
    int i=low;
    int j=high;
    while(i<j){
        while(v[i]<=pivot && i <=(high+1))i++;
        while(v[j]>pivot && j >=(low-1))j--;
        if(i<j){swap(v[i],v[j]);};
    }
    swap(v[low], v[j]);
    return j;
}
int quick_sort(vector<int>& a, int low,int high){
    if(low >= high)return 0;
    // while(low<high){
        int j = pivot(a, low, high);
        quick_sort(a, low, j-1);
        quick_sort(a, j+1, high);
    // }
}

int selection_sort(vector<int>& a){
    int size =a.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(a[i]<a[j])
                swap(a[i],a[j]);
        }
    }
    return 0;   
}
int bubble_sort(vector<int>& a){
    int s = a.size();
    int didswap=0;
    for (int i = 0; i < s-1; i++)
    {
        for (int j = 0; j < s-i-1; j++)
        {
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                didswap=1;
            }
        }
        if(didswap ==1){
            break;
        }
    }
    return 0;
}
        
    
int main()
{
    int T=0;
    vector<int> arr ={0,1,2,3,6,12,1,1,0,12};
    quick_sort(arr,0,arr.size()-1);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}