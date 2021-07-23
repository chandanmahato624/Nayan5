#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of student : ";
    cin>>n;

    int roll[n];
    int totalm[n];
    string name[n];

    for(int i=0; i<n; i++){
        cout<<"Enter name : ";
        cin>>name[i];
        cout<<"Enter roll : ";
        cin>>roll[i];
        cout<<"Enter total marks : ";
        cin>>totalm[i];
    }

    for(int i=0; i<n; i++){
        cout<<"Student Name : "<<name[i]<<endl;
        cout<<"Student Roll : "<<roll[i]<<endl;
        cout<<"Student Total Marks : "<<totalm[i]<<endl;
    }
}