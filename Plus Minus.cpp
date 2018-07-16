#include<iostream>
using namespace std;
int main(){
    int n,plus,minus,zeroes;
    int dataPoint;
    plus=minus=zeroes=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>dataPoint;
        plus+=(dataPoint>0);
        minus+=(dataPoint<0);
        zeroes+=(dataPoint==0);
    }
    printf("%.06f\n%.06f\n%.06f",(float)plus/n,(float)minus/n,(float)zeroes/n);
}