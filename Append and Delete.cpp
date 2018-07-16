#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str_a[100],str_b[100];
    int n;
    cin>>str_a;
    cin>>str_b;
    int len_a=strlen(str_a), len_b=strlen(str_b);
    cin>>n;
    
    int i=0;
    while(str_a[i]==str_b[i]){
        i++;
    }
    
    int m=(len_a-i)+(len_b-i);
    
    if(m>n)
        cout<<"No";
    else{
        if(m==n)
            cout<<"Yes";
        else if((m-n)%2==0)
            cout<<"Yes";
        else if(n>=len_a+len_b)
            cout<<"Yes";
        else
            cout<<"No";
    }
    return 0;
}