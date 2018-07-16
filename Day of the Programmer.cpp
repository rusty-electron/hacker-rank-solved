#include<iostream>
using namespace std;
int main(){
    int year,months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dayTotal=0,i=0;
    cin>>year;
    if(year<1918){
        if(year%4==0)
            months[1]=29;
    }else{
        if(year==1918)
            months[1]=28-13;
        else if(year%400==0 ||(year%4==0 && year%100!=0))
            months[1]=29;
    }
    while(dayTotal+months[i]<256){
            dayTotal+=months[i];
            i++;
    }
    int dd=256-dayTotal;
    int mm=i+1;
    printf("%02d.%02d.%d",dd,mm,year);
}