#include<iostream>
using namespace std;
int main(){
    int a[2], b[2],h,m,s;
    cout<<"Enter the first time."<<endl;
    cout<<"Enter Hours : ";
    cin>>a[0];
    cout<<"Enter Minutes : ";
    cin>>a[1];
    cout<<"Enter Seconds : ";
    cin>>a[2];

    cout<<"Enter the Second time."<<endl;
    cout<<"Enter Hours : ";
    cin>>b[0];
    cout<<"Enter Minutes : ";
    cin>>b[1];
    cout<<"Enter Seconds : ";
    cin>>b[2];

    // Now add two time
   
    s=(a[2]+b[2])%60;
    m=(a[1]+b[1]+((a[2]+b[2])/60))%60;
   // h=a[0]+b[0]+((a[1]+b[1]+((a[2]+b[2])/60))/60);
    h=a[0]+b[0]+((a[1]+b[1])/60);
    cout<<"Total time : "<<h<<"h "<<m<<"m "<<s<<"s ";
}
