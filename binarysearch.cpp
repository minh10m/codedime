// điều kiện hàm phải sắp xếp tăng dần 
#include <iostream>
#include <algorithm>
using namespace std;
bool bs(int a[], int n, int x){
    int l=0,r=n-1;
    while ( l<= r){
        int m=(l+r)/2;
        if (a[m]==x){
            return true;
        }
        else if (a[m]<x){
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    return false;
}
int main(){
    int a[100];int n;
    cout<<"nhap n";
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<bs (a,n,x);
    return 0;
}