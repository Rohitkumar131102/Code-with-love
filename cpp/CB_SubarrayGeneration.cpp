#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define ff              first
#define ss              second
#define ll              long long int
#define mod             1000000007
#define inf             1e18
#define loop(i,a,b)     for(int i=(a);i<=(b);i++)
#define loopd(i,a,b)    for(int i=(a);i>=(b);i--)
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a[1000],n;
cin>>n;
 
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }

 for(int i=0;i<n;i++)
 {
     for(int j=i;j<n;j++)
     {
         for(int k=i;k<=j;k++)
         {
             cout<<a[k]<<" ";
         }
         cout<<endl;
     }
     
 }
 
 
return 0;
    
    
}