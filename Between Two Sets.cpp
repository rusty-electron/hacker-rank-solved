#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int superlcm(int a[],int n){
    int dataStored = a[0];
    
    for(int i=1;i<n;i++){
        dataStored = (a[i]*dataStored)/gcd(a[i],dataStored);
    }
    return dataStored;
}

int supergcd(int a[], int n){
    int gcdStored = a[0];
    
    for(int i=1;i<n;i++){
        gcdStored = gcd(a[i],gcdStored);
    }
    return gcdStored;
}
int main(){
    int m,n,lcmReturn,gcdReturn;
    int arr_a[10],arr_b[10];
    
    int counter=0,flag;
    
    cin>>m>>n;
    for(int i=0;i<m;i++)
        cin>>arr_a[i];
    for(int i=0;i<n;i++)
        cin>>arr_b[i];
    lcmReturn = superlcm(arr_a,m);
    gcdReturn = supergcd(arr_b,n);
    
    for(int i=lcmReturn;i<=gcdReturn;i+=lcmReturn){
        flag=0;
        for(int j=0;j<n;j++){
            if(arr_b[j]%i!=0){
                flag=-1;
                break;
            }
        }
        if(flag==0)
            counter++;
    }
    cout<<counter;
    // cout<<lcmReturn<<endl;
    // cout<<gcdReturn;
}